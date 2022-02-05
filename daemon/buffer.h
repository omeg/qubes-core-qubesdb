/*
 * The Qubes OS Project, http://www.qubes-os.org
 *
 * Copyright (C) 2010  Rafal Wojtczuk  <rafal@invisiblethingslab.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#pragma once
#ifndef _BUFFER_H
#define _BUFFER_H

struct buffer {
    char *buffer;
    int buffer_size;
    int data_offset;
    int data_count;
};

#define BUFFER_SIZE_MIN 8192

struct buffer *buffer_create(void);
void buffer_free(struct buffer *b);
int buffer_append(struct buffer *b, char *buf, int size);
int buffer_datacount(struct buffer *b);
char *buffer_data(struct buffer *b);
void buffer_substract(struct buffer *b, int count);

#endif /* _BUFFER_H */
