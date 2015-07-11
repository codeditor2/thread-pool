/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * main.c
 * Copyright (C) 2015 rudy <rudy@ubuntu>
 * 
 * thread-pool is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * thread-pool is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "thread-poll.h"

int main()
{
        thread_pool *tp = tp_init(5);
        int i;
        int arg = 7;
	
        pthread_t producer_thread_id;//生产者线程ID
        
        pthread_create(&producer_thread_id, NULL, (void *)thread_func_producer, (void *)tp);

        pthread_join(producer_thread_id, NULL);
	
        tp_destroy(tp);

        return 0;
}
