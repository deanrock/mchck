struct RTC {
        uint32_t tsr;
        struct RTC_TPR {
                UNION_STRUCT_START(32);
                uint32_t tpr      : 16;
                uint32_t _rsvd0   : 16;
                UNION_STRUCT_END;
        } tpr;
        uint32_t tar;
        struct RTC_TCR {
                UNION_STRUCT_START(32);
                uint32_t tcr      :  8;
                uint32_t cir      :  8;
                uint32_t tcv      :  8;
                uint32_t cic      :  8;
                UNION_STRUCT_END;
        } tcr;
        struct RTC_CR {
                UNION_STRUCT_START(32);
                uint32_t swr      :  1;
                uint32_t wpe      :  1;
                uint32_t sup      :  1;
                uint32_t um       :  1;
                uint32_t _rsvd0   :  4;
                uint32_t osce     :  1;
                uint32_t clko     :  1;
                uint32_t sc16p    :  1;
                uint32_t sc8p     :  1;
                uint32_t sc4p     :  1;
                uint32_t sc2p     :  1;
                uint32_t _rsvd1   : 18;
                UNION_STRUCT_END;
        } cr;
        struct RTC_SR {
                UNION_STRUCT_START(32);
                uint32_t tif      :  1;
                uint32_t tof      :  1;
                uint32_t taf      :  1;
                uint32_t _rsvd0   :  1;
                uint32_t tce      :  1;
                uint32_t _rsvd1   : 27;
                UNION_STRUCT_END;
        } sr;
        struct RTC_LR {
                UNION_STRUCT_START(32);
                uint32_t _rsvd0   :  3;
                uint32_t tcl      :  1;
                uint32_t crl      :  1;
                uint32_t srl      :  1;
                uint32_t lrl      :  1;
                uint32_t _rsvd1   : 25;
                UNION_STRUCT_END;
        } lr;
        struct RTC_IER {
                UNION_STRUCT_START(32);
                uint32_t tiie     :  1;
                uint32_t toie     :  1;
                uint32_t taie     :  1;
                uint32_t _rsvd2   :  1;
                uint32_t tsie     :  1;
                uint32_t _rsvd3   : 27;
                UNION_STRUCT_END;
        } ier;
        uint32_t _pad0[(0x800 - 0x1C)/4 - 1];
        struct RTC_WAR {
                UNION_STRUCT_START(32);
                uint32_t tsrw     :  1;
                uint32_t tprw     :  1;
                uint32_t tarw     :  1;
                uint32_t tcrw     :  1;
                uint32_t crw      :  1;
                uint32_t srw      :  1;
                uint32_t lrw      :  1;
                uint32_t ierw     :  1;
                uint32_t _rsvd0   : 24;
                UNION_STRUCT_END;
        } war;
        struct RTC_RAR {
                UNION_STRUCT_START(32);
                uint32_t tsrr     :  1;
                uint32_t tprr     :  1;
                uint32_t tarr     :  1;
                uint32_t tcrr     :  1;
                uint32_t crr      :  1;
                uint32_t srr      :  1;
                uint32_t lrr      :  1;
                uint32_t ierr     :  1;
                uint32_t _rsvd0   : 24;
                UNION_STRUCT_END;
        } rar;
};

CTASSERT_SIZE_BYTE(struct RTC, 0x804+4);
