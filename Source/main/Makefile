#============================================================================
#               C O P Y R I G H T
#-----------------------------------------------------------------------------
# Copyright (c) by JRTx-Tech Technology Co. Ltd.    All rights reserved.
#
#    This software is furnished under a license and may be used and copied 
#    only in accordance with the terms of such license and with the inclusion
#    of the above copyright notice. This software or any other copies thereof 
#    may not be provided or otherwise made available to any other person.
#    No title to and ownership of the software is hereby transferred.
#
#    The information in this software is subject to change without notice 
#    and should not be construed as a commitment by 
#    JRTx-Tech Technology Co. Ltd.
#
#    JRTx-Tech Technology Co. Ltd assumes no responsibility for the use 
#    or reliability of its Software on equipment which is not supported by 
#    JRTx-Tech Technology Co. Ltd.
#----------------------------------------------------------------------------
#	Project:        Socket Double Linked List
#	Source:         Source/main
#	Compiler:       gcc version 8.1.0
#	Shell:	        Git-Bash
#	
#	Author:         Ji Ren
#	Creation Date:  2022-04-12 
#----------------------------------------------------------------------------
# Description: 
#		This is a module makefile for application files
#
#============================================================================
CFILES = $(wildcard *.c)
OBJS   = $(CFILES:%.c=%.o)

#----------------------------------------------------------------------------
all: $(OBJS)
%.o : %.c
	@echo $(<F)
	@$(subst \,/, $(CC) $(CFLAGS) -o $(OBJ_DIR)/$(@F) -c $<)