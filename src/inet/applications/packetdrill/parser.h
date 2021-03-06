/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ELLIPSIS = 258,
    UDP = 259,
    ACK = 260,
    WIN = 261,
    WSCALE = 262,
    MSS = 263,
    NOP = 264,
    TIMESTAMP = 265,
    ECR = 266,
    EOL = 267,
    TCPSACK = 268,
    VAL = 269,
    SACKOK = 270,
    OPTION = 271,
    CHUNK = 272,
    MYDATA = 273,
    MYINIT = 274,
    MYINIT_ACK = 275,
    MYHEARTBEAT = 276,
    MYHEARTBEAT_ACK = 277,
    MYABORT = 278,
    MYSHUTDOWN = 279,
    MYSHUTDOWN_ACK = 280,
    MYERROR = 281,
    MYCOOKIE_ECHO = 282,
    MYCOOKIE_ACK = 283,
    MYSHUTDOWN_COMPLETE = 284,
    HEARTBEAT_INFORMATION = 285,
    CAUSE_INFO = 286,
    MYSACK = 287,
    STATE_COOKIE = 288,
    PARAMETER = 289,
    MYSCTP = 290,
    TYPE = 291,
    FLAGS = 292,
    LEN = 293,
    MYSUPPORTED_EXTENSIONS = 294,
    TYPES = 295,
    TAG = 296,
    A_RWND = 297,
    OS = 298,
    IS = 299,
    TSN = 300,
    MYSID = 301,
    SSN = 302,
    PPID = 303,
    CUM_TSN = 304,
    GAPS = 305,
    DUPS = 306,
    SRTO_ASSOC_ID = 307,
    SRTO_INITIAL = 308,
    SRTO_MAX = 309,
    SRTO_MIN = 310,
    SINIT_NUM_OSTREAMS = 311,
    SINIT_MAX_INSTREAMS = 312,
    SINIT_MAX_ATTEMPTS = 313,
    SINIT_MAX_INIT_TIMEO = 314,
    MYSACK_DELAY = 315,
    SACK_FREQ = 316,
    ASSOC_VALUE = 317,
    ASSOC_ID = 318,
    SACK_ASSOC_ID = 319,
    MYFLOAT = 320,
    INTEGER = 321,
    HEX_INTEGER = 322,
    MYWORD = 323,
    MYSTRING = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 211 "parser.y" /* yacc.c:1909  */

    int64 integer;
    double floating;
    char *string;
    char *reserved;
    int64 time_usecs;
    enum direction_t direction;
    uint16 port;
    int32 window;
    uint32 sequence_number;
    struct {
        int protocol;    /* IPPROTO_TCP or IPPROTO_UDP */
        uint32 start_sequence;
        uint16 payload_bytes;
    } tcp_sequence_info;
    PacketDrillEvent *event;
    PacketDrillPacket *packet;
    struct syscall_spec *syscall;
    PacketDrillStruct *sack_block;
    PacketDrillExpression *expression;
    cQueue *expression_list;
    PacketDrillTcpOption *tcp_option;
    PacketDrillSctpParameter *sctp_parameter;
    PacketDrillOption *option;
    cQueue *tcp_options;
    struct errno_spec *errno_info;
    cQueue *sctp_chunk_list;
    cQueue *sctp_parameter_list;
    cQueue *sack_block_list;
    PacketDrillBytes *byte_list;
    uint8 byte;
    PacketDrillSctpChunk *sctp_chunk;

#line 158 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
