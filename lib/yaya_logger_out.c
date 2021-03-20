#include "yaya_logger.h"

#if (LOGGER_OUT != 0)

void ___logger_out(logger *lvg)
{
    switch (lvg->psett->stream) {
        case LS_STDOUT: {
            fputs(lvg->out_buff, stdout);
            fputc('\n', stdout);
            break;
        }
        case LS_STDERR: {
            fputs(lvg->out_buff, stderr);
            fputc('\n', stderr);
            break;
        }
        case LS_STDFILE: {
            break;
        }
        case LS_STDBUF: {
            break;
        }
    }

    lvg->out_buff[0] = '\0';
    lvg->out_offset  = 0;
}

#endif
