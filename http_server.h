#ifndef KHTTPD_HTTP_SERVER_H
#define KHTTPD_HTTP_SERVER_H
#define MODULE_NAME "khttpd"
#include <net/sock.h>

struct http_server_param {
    struct socket *listen_socket;
};

extern int http_server_daemon(void *arg);

struct httpd_service {
    bool is_stopped;
    struct list_head head;
};

extern struct httpd_service daemon_list;
#endif
