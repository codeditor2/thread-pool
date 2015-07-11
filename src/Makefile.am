## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = thread_pool

thread_pool_SOURCES = \
	main.c \
	thread-poll.c \
	thread-poll.h

thread_pool_LDFLAGS = 

thread_pool_LDADD = -lpthread

