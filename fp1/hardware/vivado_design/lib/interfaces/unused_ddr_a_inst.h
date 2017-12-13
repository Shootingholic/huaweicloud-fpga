
rdimma_x8_16GB_2133Mbps   u_phy_ddra_72b (
    //rcm
    .sys_rst                    (rst_200m                       ),
    .c0_sys_clk_p               (ddra_100m_ref_clk_p            ),
    .c0_sys_clk_n               (ddra_100m_ref_clk_n            ),
    .c0_ddr4_ui_clk             (                               ),
    .c0_ddr4_ui_clk_sync_rst    (                               ),
    .dbg_clk                    (                               ),
    //model
    .c0_ddr4_act_n              (ddra_72b_act_n                 ),
    .c0_ddr4_adr                (ddra_72b_addr                  ),
    .c0_ddr4_ba                 (ddra_72b_ba                    ),
    .c0_ddr4_bg                 (ddra_72b_bg                    ),
    .c0_ddr4_cke                (ddra_72b_cke                   ),
    .c0_ddr4_odt                (ddra_72b_odt                   ),
    .c0_ddr4_cs_n               (ddra_72b_cs_n                  ),
    .c0_ddr4_ck_t               (ddra_72b_ck_t                  ),
    .c0_ddr4_ck_c               (ddra_72b_ck_c                  ),
    .c0_ddr4_reset_n            (ddra_72b_rst_n                 ),
    .c0_ddr4_parity             (ddra_72b_par                   ),
    .c0_ddr4_dq                 (ddra_72b_dq                    ),
    .c0_ddr4_dqs_c              (ddra_72b_dqs_c                 ),
    .c0_ddr4_dqs_t              (ddra_72b_dqs_t                 ),
    .c0_ddr4_dm_dbi_n           (ddra_72b_dm_dbi_n              ),
    //common
    .c0_init_calib_complete     (                               ), 
    //mc                                    
    .dBufAdr                    (0                              ),
    .wrData                     (576'd0                         ),
	.wrDataMask                 (72'd0                          ),
    //.wrDataMask                  
    .rdData                     (                               ),
    .rdDataAddr                 (                               ),
    .rdDataEn                   (                               ),
    .rdDataEnd                  (                               ),
    .per_rd_done                (                               ),
    .rmw_rd_done                (                               ),
    .wrDataAddr                 (                               ),
    .wrDataEn                   (                               ),
                                            
    .mc_ACT_n                   (8'd0                           ),
    .mc_ADR                     (136'd0                         ),
    .mc_BA                      (16'd0                          ),
    .mc_BG                      (16'd0                          ),
    .mc_CKE                     (16'd0                          ),
    .mc_CS_n                    (16'd0                          ),
    .mc_ODT                     (16'd0                          ),
    .mcCasSlot                  (2'd0                           ),
    .mcCasSlot2                 (1'd0                           ),
    .mcRdCAS                    (1'd0                           ),
    .mcWrCAS                    (1'd0                           ),
    .winInjTxn                  (1'd0                           ),
    .winRmw                     (1'd0                           ),
    .gt_data_ready              (1'd0                           ),
    .winBuf                     (5'd0                           ),
    .winRank                    (2'd0                           ),
    .tCWL                       (                               ),
    .dbg_bus                    (                               ) 
    );