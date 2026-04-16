    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 228;
            section.data(228)  = dumData; %prealloc

                    ;% rtP.Kdroop_fp
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Kdroop_vq
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Ki_vd
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Ki_vq
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Kp_vd
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Kp_vq
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Ts
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Vdc1
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Vdc2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Vrms
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.fgrid
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.VdDiscretePIController_InitialConditionForIntegrator
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.VqDiscretePIController_InitialConditionForIntegrator
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.VdDiscretePIController_InitialConditionForIntegrator_idipyi4en2
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.VqDiscretePIController_InitialConditionForIntegrator_etog44td1j
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PowerMeasurementThreePhase_K
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PowerMeasurementThreePhase_K_hy3xpce12q
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_oyh5wkhpw5
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_bot0muxzza
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Ki_LF
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_ndbawt3bd0
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Kp_LF
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_evcqlc0f5m
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit_kzdnvpoxxj
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit_l3t03oryem
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_b1r3iy3lau
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Theta0
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_oksq2l2odz
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit_clg5ygz5v5
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit_bclvwasnsn
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_gca2pndy5y
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kxsgugcvmz
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_k5nbqzap3x
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_l0mfddutlu
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_erg5yu5yxu
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_kpwvhjlgaq
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_c5wjg5w2lg
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_cl5dytyjkn
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_aj0bheagem
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_k3s5fw1q11
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_h1m1w5hlay
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.Gain1_Gain
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.Gain1_Gain_ollxa44d1e
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.Gain2_Gain
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.Gain1_Gain_b2wmxmysa4
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.Gain1_Gain_cvrz05eflz
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.Gain1_Gain_msdjc3sds3
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.Gain1_Gain_bct5xv0x0d
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.Gain1_Gain_fdb215vbov
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Gain3_Gain
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.Gain1_Gain_hzadu4huns
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.Gain1_Gain_caxz35q2gc
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.Gain2_Gain_fkhwdbr2xf
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.Gain1_Gain_kzsdhtloji
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.Gain1_Gain_im4ln3hgws
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.Gain1_Gain_ig1ss2ojir
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.Gain1_Gain_ons3rxrahf
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.Gain1_Gain_pxruile2ng
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.Gain3_Gain_ku2mah5vw0
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.Connectat2s_Time
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.Connectat2s_Y0
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.Connectat2s_YFinal
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.UnitDelay1_InitialCondition_lapzeesnb2
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.Integrator_gainval
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.Gain1_Gain_losnrngiyc
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.Constant1_Value
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.Integrator_gainval_carz0grxbg
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.Integrator_UpperSat
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.Integrator_LowerSat
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtP.Saturation_UpperSat
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtP.Saturation_LowerSat
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtP.Gain1_Gain_dzyyjzode5
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtP.fromWS_Signal1_Time0
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtP.fromWS_Signal1_Data0
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 87;

                    ;% rtP.Integrator_gainval_avayg33ayj
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 91;

                    ;% rtP.Integrator_gainval_bh1byogw3o
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 92;

                    ;% rtP.Integrator_IC
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 93;

                    ;% rtP.UnitDelay1_InitialCondition_igxde5r1oa
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 94;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 95;

                    ;% rtP.Delay_InitialCondition
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 96;

                    ;% rtP.Gain_Gain
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 97;

                    ;% rtP.Integrator_gainval_g1hx0pgpel
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 98;

                    ;% rtP.Integrator_IC_g4xqnrlohi
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 99;

                    ;% rtP.UnitDelay1_InitialCondition_mkjhh3hej3
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 100;

                    ;% rtP.UnitDelay2_InitialCondition_ky4da5qoff
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 101;

                    ;% rtP.Delay_InitialCondition_pxsgay3n2d
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 102;

                    ;% rtP.Gain_Gain_msl2mctrek
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 103;

                    ;% rtP.Integrator_gainval_g2bxhp4r3m
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 104;

                    ;% rtP.Integrator_IC_ol30bkacbk
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 105;

                    ;% rtP.UnitDelay1_InitialCondition_mwdjagajvk
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 106;

                    ;% rtP.UnitDelay2_InitialCondition_oacume4w23
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 107;

                    ;% rtP.Delay_InitialCondition_jdzlvwaqw3
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 108;

                    ;% rtP.Gain_Gain_ka0ohvwpd2
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 109;

                    ;% rtP.Integrator_gainval_nec3pprea3
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 110;

                    ;% rtP.Integrator_IC_fe5bpfeox5
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 111;

                    ;% rtP.UnitDelay1_InitialCondition_jazgyvwy0b
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 112;

                    ;% rtP.UnitDelay2_InitialCondition_c335id2yur
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 113;

                    ;% rtP.Delay_InitialCondition_kvqzfvuqvw
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 114;

                    ;% rtP.Gain_Gain_n2i2fdezd0
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 115;

                    ;% rtP.Integrator_gainval_iydjvvm3uf
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 116;

                    ;% rtP.Integrator_IC_klk0nn5nsf
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 117;

                    ;% rtP.UnitDelay1_InitialCondition_lqiknbltiv
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 118;

                    ;% rtP.UnitDelay2_InitialCondition_lq1eghcbab
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 119;

                    ;% rtP.Delay_InitialCondition_eo1i4emrrh
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 120;

                    ;% rtP.Gain_Gain_ewisuu03rb
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 121;

                    ;% rtP.Integrator_gainval_h1oputbahl
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 122;

                    ;% rtP.Integrator_IC_edmj50xozy
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 123;

                    ;% rtP.UnitDelay1_InitialCondition_ls5nawmwll
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 124;

                    ;% rtP.UnitDelay2_InitialCondition_p5x2r4bsum
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 125;

                    ;% rtP.Delay_InitialCondition_jdx3lhztnl
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 126;

                    ;% rtP.Gain_Gain_n13h0tbo3s
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 127;

                    ;% rtP.Gain_Gain_ij5ephcub4
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 128;

                    ;% rtP.Integrator_IC_i2u0y3f22e
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 129;

                    ;% rtP.FromWorkspace_Time0
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 130;

                    ;% rtP.FromWorkspace_Data0
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 132;

                    ;% rtP.Gain1_Gain_mocebkriwh
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 134;

                    ;% rtP.Integrator_gainval_gjezqe5f5f
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 135;

                    ;% rtP.Integrator_gainval_prwo1fbvrt
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 136;

                    ;% rtP.Gain1_Gain_cwovvihjzo
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 137;

                    ;% rtP.Initial_Value
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 138;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 139;

                    ;% rtP.avoiddivisionby0_UpperSat
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 140;

                    ;% rtP.avoiddivisionby0_LowerSat
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 141;

                    ;% rtP.UnitDelay2_InitialCondition_p5dmi4fyvs
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 142;

                    ;% rtP.Integrator_gainval_aiqo4pqknj
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 143;

                    ;% rtP.Gain1_Gain_abh3hvbccc
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 144;

                    ;% rtP.Constant1_Value_lsknndl14i
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 145;

                    ;% rtP.Integrator_gainval_j4gmb2gwsc
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 146;

                    ;% rtP.Integrator_UpperSat_lm3ewrrsxh
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 147;

                    ;% rtP.Integrator_LowerSat_hjh2vovvsr
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 148;

                    ;% rtP.Saturation_UpperSat_gox4btb11r
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 149;

                    ;% rtP.Saturation_LowerSat_axo2ygf3i0
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 150;

                    ;% rtP.Gain1_Gain_e2meerxskp
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 151;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 152;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 156;

                    ;% rtP.Integrator_gainval_nbtau22bcs
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 160;

                    ;% rtP.Integrator_gainval_lx3n3x4rqc
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 161;

                    ;% rtP.Integrator_IC_cooq3xxsvj
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 162;

                    ;% rtP.UnitDelay1_InitialCondition_j5udodixng
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 163;

                    ;% rtP.UnitDelay2_InitialCondition_lxsa4gacjt
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 164;

                    ;% rtP.Delay_InitialCondition_a55iiq0o4f
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 165;

                    ;% rtP.Gain_Gain_g1bxa5yagb
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 166;

                    ;% rtP.Integrator_gainval_j3zllfw2ya
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 167;

                    ;% rtP.Integrator_IC_o1gepkaxe2
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 168;

                    ;% rtP.UnitDelay1_InitialCondition_jfuykwtijp
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 169;

                    ;% rtP.UnitDelay2_InitialCondition_lratdejrvc
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 170;

                    ;% rtP.Delay_InitialCondition_iyzd5f3bo1
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 171;

                    ;% rtP.Gain_Gain_lhnhdifs0e
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 172;

                    ;% rtP.Integrator_gainval_n4mbdo45bw
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 173;

                    ;% rtP.Integrator_IC_evhka53zqk
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 174;

                    ;% rtP.UnitDelay1_InitialCondition_izykpui1wt
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 175;

                    ;% rtP.UnitDelay2_InitialCondition_ec3b0v2ked
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 176;

                    ;% rtP.Delay_InitialCondition_bavhdtocgy
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 177;

                    ;% rtP.Gain_Gain_o4zcph2u4p
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 178;

                    ;% rtP.Integrator_gainval_paeznd5jot
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 179;

                    ;% rtP.Integrator_IC_ngdqv10nj2
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 180;

                    ;% rtP.UnitDelay1_InitialCondition_bosg34hruf
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 181;

                    ;% rtP.UnitDelay2_InitialCondition_iqiy2ig2a2
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 182;

                    ;% rtP.Delay_InitialCondition_lcu1ixidx5
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 183;

                    ;% rtP.Gain_Gain_knn0armyna
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 184;

                    ;% rtP.Integrator_gainval_cewndrxcpd
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 185;

                    ;% rtP.Integrator_IC_bwgl5a0wob
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 186;

                    ;% rtP.UnitDelay1_InitialCondition_nggtcjmvxt
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 187;

                    ;% rtP.UnitDelay2_InitialCondition_ofqprotkgb
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 188;

                    ;% rtP.Delay_InitialCondition_hqkwrz2i2i
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 189;

                    ;% rtP.Gain_Gain_in5c1sqasm
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 190;

                    ;% rtP.Integrator_gainval_ksirpb4yxq
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 191;

                    ;% rtP.Integrator_IC_fpbmwehjlf
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 192;

                    ;% rtP.UnitDelay1_InitialCondition_eyrhkzaysm
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 193;

                    ;% rtP.UnitDelay2_InitialCondition_eqc4tfjodc
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 194;

                    ;% rtP.Delay_InitialCondition_gukmfnnmw2
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 195;

                    ;% rtP.Gain_Gain_dgbqv335s1
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 196;

                    ;% rtP.Gain_Gain_pcqi2zh5ks
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 197;

                    ;% rtP.Integrator_IC_dkgbnnaxcx
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 198;

                    ;% rtP.FromWorkspace2_Time0
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 199;

                    ;% rtP.FromWorkspace2_Data0
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 201;

                    ;% rtP.Gain1_Gain_algp55cnlc
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 203;

                    ;% rtP.Integrator_gainval_f0rqsj0fnp
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 204;

                    ;% rtP.Integrator_gainval_kexeikjgzm
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 205;

                    ;% rtP.Gain1_Gain_kbqppqxrgb
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 206;

                    ;% rtP.Initial_Value_j4wczc1lxq
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 207;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_arqevlqjww
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 208;

                    ;% rtP.avoiddivisionby0_UpperSat_nx01wqrouz
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 209;

                    ;% rtP.avoiddivisionby0_LowerSat_avgk30jeg3
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 210;

                    ;% rtP.UnitDelay2_InitialCondition_pvc43f4wjv
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 211;

                    ;% rtP.Gain_Gain_edy3rsxlbj
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 212;

                    ;% rtP.Gain_Gain_liiiiertx5
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 213;

                    ;% rtP.Integrator_gainval_jiozqx4w4v
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 214;

                    ;% rtP.Gain1_Gain_b4avjwyrj2
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 215;

                    ;% rtP.Constant1_Value_da1dwznx44
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 216;

                    ;% rtP.Integrator_gainval_coazxg22nt
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 217;

                    ;% rtP.Integrator_UpperSat_hpvvxjqfd4
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 218;

                    ;% rtP.Integrator_LowerSat_i10qscebp4
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 219;

                    ;% rtP.Saturation_UpperSat_i15q0blda2
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 220;

                    ;% rtP.Saturation_LowerSat_jx0zzxgaew
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 221;

                    ;% rtP.Gain1_Gain_gi0auafmvm
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 222;

                    ;% rtP.Integrator_gainval_o23ns0zq3s
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 223;

                    ;% rtP.Gain1_Gain_b02alh1u5u
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 224;

                    ;% rtP.Constant1_Value_ktx3gyatq5
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 225;

                    ;% rtP.Integrator_gainval_axkjs1f2yw
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 226;

                    ;% rtP.Integrator_UpperSat_nxtktwi3hv
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 227;

                    ;% rtP.Integrator_LowerSat_micq5t2bis
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 228;

                    ;% rtP.Saturation_UpperSat_kp53gt01p2
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 229;

                    ;% rtP.Saturation_LowerSat_p4o1xc0k2h
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 230;

                    ;% rtP.Gain1_Gain_kgot1sgoty
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 231;

                    ;% rtP.Constant1_Value_lodywi0z2n
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 232;

                    ;% rtP.Constant2_Value
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 233;

                    ;% rtP.Constant3_Value
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 234;

                    ;% rtP.Sequence_Value
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 235;

                    ;% rtP.V0_Value
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 236;

                    ;% rtP.Constant5_Value
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 237;

                    ;% rtP.Constant2_Value_lexwhwkcr1
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 238;

                    ;% rtP.Constant3_Value_lyqvw4nurv
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 239;

                    ;% rtP.Sequence_Value_phlzt4e1pz
                    section.data(225).logicalSrcIdx = 224;
                    section.data(225).dtTransOffset = 240;

                    ;% rtP.V0_Value_gfkw3a205u
                    section.data(226).logicalSrcIdx = 225;
                    section.data(226).dtTransOffset = 241;

                    ;% rtP.RTP_A18535C3_IL_Value
                    section.data(227).logicalSrcIdx = 226;
                    section.data(227).dtTransOffset = 242;

                    ;% rtP.RTP_D6820555_IL_Value
                    section.data(228).logicalSrcIdx = 227;
                    section.data(228).dtTransOffset = 245;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtP.alpha2_Gain
                    section.data(1).logicalSrcIdx = 228;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.alpha_Gain
                    section.data(2).logicalSrcIdx = 229;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.alpha2_Gain_edh0qhxj4e
                    section.data(3).logicalSrcIdx = 230;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.alpha_Gain_pkcgaplt3m
                    section.data(4).logicalSrcIdx = 231;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.alpha_Gain_h144fvpml1
                    section.data(5).logicalSrcIdx = 232;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.alpha2_Gain_k54l5bjcyn
                    section.data(6).logicalSrcIdx = 233;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.alpha_Gain_ns5srwfp4a
                    section.data(7).logicalSrcIdx = 234;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.alpha2_Gain_b2lryd4erl
                    section.data(8).logicalSrcIdx = 235;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.alpha2_Gain_jmjocn5324
                    section.data(9).logicalSrcIdx = 236;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.alpha_Gain_chzz2ghjpt
                    section.data(10).logicalSrcIdx = 237;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.alpha2_Gain_jdfqf2swbm
                    section.data(11).logicalSrcIdx = 238;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.alpha_Gain_mt0yc41pmx
                    section.data(12).logicalSrcIdx = 239;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.alpha_Gain_ebrttocmwz
                    section.data(13).logicalSrcIdx = 240;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.alpha2_Gain_g1epyvb0j5
                    section.data(14).logicalSrcIdx = 241;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.alpha_Gain_c32fofybnv
                    section.data(15).logicalSrcIdx = 242;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.alpha2_Gain_c0nmmexjjw
                    section.data(16).logicalSrcIdx = 243;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.gl43fmrisv.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 244;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.gl43fmrisv.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 245;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.hujlteqo2z.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 246;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.hujlteqo2z.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 247;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 112;
            section.data(112)  = dumData; %prealloc

                    ;% rtB.mtj0qfc1hb
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.eehr2alozi
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ikm2snr5zf
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 5;

                    ;% rtB.pffnxrfxjy
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 11;

                    ;% rtB.nz5jti2wr1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 15;

                    ;% rtB.o5rnvo024s
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 19;

                    ;% rtB.m0vl3iooy4
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 23;

                    ;% rtB.dyttx33jl4
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 27;

                    ;% rtB.a1kee0bbhh
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 31;

                    ;% rtB.pur1ybnggo
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 35;

                    ;% rtB.a4enoxc25n
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 41;

                    ;% rtB.eqnxhwykea
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 45;

                    ;% rtB.dnpeo0mlyy
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 49;

                    ;% rtB.fcn2r552dv
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 53;

                    ;% rtB.nmpnlfxsny
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 57;

                    ;% rtB.pb2fck224w
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 61;

                    ;% rtB.mkbvufs0fh
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 65;

                    ;% rtB.nzubz5zcaw
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 66;

                    ;% rtB.dveoezpzol
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 177;

                    ;% rtB.o44efxocq0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 191;

                    ;% rtB.jnilobsjko
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 192;

                    ;% rtB.fil4mrutwj
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 193;

                    ;% rtB.polsp5zirz
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 194;

                    ;% rtB.ndti0gtzl3
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 195;

                    ;% rtB.pzqtzfecyw
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 196;

                    ;% rtB.na4tyjngmd
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 198;

                    ;% rtB.fymik4ehbr
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 200;

                    ;% rtB.ffj153gzwx
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 202;

                    ;% rtB.c51pwmznvw
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 204;

                    ;% rtB.femzflyely
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 206;

                    ;% rtB.jyj4ef53mr
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 208;

                    ;% rtB.ex0hed1yyl
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 210;

                    ;% rtB.bxl5szpbbj
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 212;

                    ;% rtB.aobve4fqdo
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 214;

                    ;% rtB.ah4awuzbmi
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 216;

                    ;% rtB.gcqrargtap
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 218;

                    ;% rtB.nelhatsdgn
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 220;

                    ;% rtB.ivyaisc3iw
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 222;

                    ;% rtB.fx0in4qczm
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 224;

                    ;% rtB.b0zpex3nd3
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 226;

                    ;% rtB.dsgoyg1upn
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 228;

                    ;% rtB.kh5quoykke
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 230;

                    ;% rtB.azdyb5jzw2
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 232;

                    ;% rtB.pfeoax4yjp
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 233;

                    ;% rtB.ckmflb5ptc
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 234;

                    ;% rtB.kh1chxh5dg
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 235;

                    ;% rtB.ejiwuxoqfh
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 236;

                    ;% rtB.fzvssdup2a
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 237;

                    ;% rtB.nim1vqistm
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 238;

                    ;% rtB.hzqxukdt2n
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 239;

                    ;% rtB.k2pix3y1pq
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 242;

                    ;% rtB.gee5ztsvvw
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 243;

                    ;% rtB.bmjrp4i5l2
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 244;

                    ;% rtB.ly0sxsegct
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 245;

                    ;% rtB.hf5edtag1w
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 251;

                    ;% rtB.pdsagbfkyi
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 252;

                    ;% rtB.b3oezmaicg
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 253;

                    ;% rtB.cxextfpyro
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 254;

                    ;% rtB.c4nvx3ktei
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 255;

                    ;% rtB.egc5x2s3e1
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 256;

                    ;% rtB.dhxxrbtiya
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 257;

                    ;% rtB.lkgxgrmcdf
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 258;

                    ;% rtB.ab1tfr0xfv
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 259;

                    ;% rtB.klcm0ofnb2
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 261;

                    ;% rtB.mktfwuvyz0
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 263;

                    ;% rtB.hrf2kbz0fz
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 265;

                    ;% rtB.ncijorklu2
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 267;

                    ;% rtB.csz1erxzbp
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 269;

                    ;% rtB.nohypq1rb4
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 271;

                    ;% rtB.c53six4jge
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 273;

                    ;% rtB.krbnjfnjon
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 275;

                    ;% rtB.gvbz2kxljw
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 277;

                    ;% rtB.deuh5tyk4q
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 279;

                    ;% rtB.d0gifw0q3v
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 281;

                    ;% rtB.ahufcewv41
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 283;

                    ;% rtB.pg2dbtctik
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 285;

                    ;% rtB.evp4c5goee
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 287;

                    ;% rtB.jdgl5035pl
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 289;

                    ;% rtB.n0nnkknxzj
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 291;

                    ;% rtB.bf3cljzk3i
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 293;

                    ;% rtB.lutjprh4lt
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 295;

                    ;% rtB.o0id30im0j
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 296;

                    ;% rtB.hiku2rsz33
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 297;

                    ;% rtB.jqjid2ex0e
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 298;

                    ;% rtB.glxm44mkys
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 299;

                    ;% rtB.bo1uuaes1k
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 300;

                    ;% rtB.bsgqmzut0s
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 301;

                    ;% rtB.lrqp1tp2yx
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 302;

                    ;% rtB.l4aof44tt5
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 305;

                    ;% rtB.dzso2blz3j
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 306;

                    ;% rtB.fdzts3csz1
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 307;

                    ;% rtB.k5e1dud3cs
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 308;

                    ;% rtB.h53otsunu5
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 314;

                    ;% rtB.lyfxv21wwk
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 315;

                    ;% rtB.dsqazdztds
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 316;

                    ;% rtB.f0tw1xremj
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 317;

                    ;% rtB.pyjku12imh
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 318;

                    ;% rtB.hh4tq13ns3
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 319;

                    ;% rtB.jeo2sdv30b
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 320;

                    ;% rtB.g31ndulfdx
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 321;

                    ;% rtB.lvs2nqocrc
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 323;

                    ;% rtB.gnm1oejpr1
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 324;

                    ;% rtB.anrciyr1bu
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 325;

                    ;% rtB.laggjrezxv
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 326;

                    ;% rtB.oekaepqjyv
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 327;

                    ;% rtB.lhdhpkyers
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 328;

                    ;% rtB.dmvf3ba4on
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 329;

                    ;% rtB.o12qoj43ak
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 330;

                    ;% rtB.moxna2fjso
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 331;

                    ;% rtB.dqyaxoax35
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 332;

                    ;% rtB.ooq523rnwd
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 333;

                    ;% rtB.a3jorwwe5p
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 334;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.nrde2fmcqk
                    section.data(1).logicalSrcIdx = 114;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hj4zhmy0lq
                    section.data(2).logicalSrcIdx = 117;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.gl43fmrisv.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gl43fmrisv.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 121;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.gl43fmrisv.gjl0s33nyr
                    section.data(3).logicalSrcIdx = 122;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.hujlteqo2z.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 123;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hujlteqo2z.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 124;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.hujlteqo2z.gjl0s33nyr
                    section.data(3).logicalSrcIdx = 125;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
        sectIdxOffset = 4;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 89;
            section.data(89)  = dumData; %prealloc

                    ;% rtDW.ldvgcubppo
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gmmxfl1bw3
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.l4zj40yoiw
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 8;

                    ;% rtDW.ff1idcuyj3
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtDW.hy1ejh3uja
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% rtDW.ftitttx1ko
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtDW.nwsnu4bedy
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% rtDW.pf1lum1bqu
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtDW.cs5il4k0w2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 20;

                    ;% rtDW.gq11ipk23p
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 26;

                    ;% rtDW.gsbxdcbtoo
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 28;

                    ;% rtDW.i3dxfx4ud3
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 30;

                    ;% rtDW.gtai5gwlbw
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 32;

                    ;% rtDW.p02z5qbxni
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 34;

                    ;% rtDW.omf1kqumni
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 36;

                    ;% rtDW.mip5knuolb
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 38;

                    ;% rtDW.prhiof4qsq
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 112;

                    ;% rtDW.ecsqxwncwm
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 113;

                    ;% rtDW.casefabrfq
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 114;

                    ;% rtDW.cnmjwkmazr
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 115;

                    ;% rtDW.brlwrgk15q
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 117;

                    ;% rtDW.o25uswlvdp
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 119;

                    ;% rtDW.medeidy042
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 121;

                    ;% rtDW.cu4avl1hkj
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 6787;

                    ;% rtDW.bsq0dfmaxa
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 6789;

                    ;% rtDW.cezbwb0d2a
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 6791;

                    ;% rtDW.ox4tevucxv
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 6793;

                    ;% rtDW.g31vxfpy4q
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 13459;

                    ;% rtDW.db5bwiekun
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 13461;

                    ;% rtDW.ls4rxzkes5
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 13463;

                    ;% rtDW.bdgovhv4ik
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 13465;

                    ;% rtDW.eiw52ywrb4
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 20131;

                    ;% rtDW.hpqftlxp3c
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 20133;

                    ;% rtDW.dk0rvfsmaq
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 20135;

                    ;% rtDW.kc40jaqb2h
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 20137;

                    ;% rtDW.a1sr2wqgmu
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 26803;

                    ;% rtDW.g4ja2dajvk
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 26805;

                    ;% rtDW.luujgxmr1o
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 26807;

                    ;% rtDW.e3gek0ry3d
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 26809;

                    ;% rtDW.nvwrcwhvfh
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 33475;

                    ;% rtDW.f0gipvq3m1
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 33477;

                    ;% rtDW.kwtkfmor5n
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 33479;

                    ;% rtDW.j1x1hsbdr0
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 33481;

                    ;% rtDW.n5nzu3kjes
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 40147;

                    ;% rtDW.cpdftgvp5j
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 40148;

                    ;% rtDW.aytq4ro10u
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 40149;

                    ;% rtDW.hon4sukebl
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 40150;

                    ;% rtDW.buoynvge5k
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 40153;

                    ;% rtDW.ibybqspfgl
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 40154;

                    ;% rtDW.ho4bknelcg
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 40155;

                    ;% rtDW.itoao1sfit
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 40156;

                    ;% rtDW.c4lxq5nxdk
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 40158;

                    ;% rtDW.i31qdzmytg
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 40160;

                    ;% rtDW.ijyhgxa4ir
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 40162;

                    ;% rtDW.ikmihxdjgd
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 46828;

                    ;% rtDW.beyirrck3l
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 46830;

                    ;% rtDW.opjnplgrqr
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 46832;

                    ;% rtDW.bzfzyz3bd1
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 46834;

                    ;% rtDW.fhoxjffvpi
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 53500;

                    ;% rtDW.kibzgbc1sz
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 53502;

                    ;% rtDW.cylq3fvmgt
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 53504;

                    ;% rtDW.ezchfr4o4l
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 53506;

                    ;% rtDW.brhp0ikhtk
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 60172;

                    ;% rtDW.cx4aeyf40y
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 60174;

                    ;% rtDW.fndyh2xhdu
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 60176;

                    ;% rtDW.eftulqbrzz
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 60178;

                    ;% rtDW.m0cw303eqj
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66844;

                    ;% rtDW.hlb4yuxrtw
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 66846;

                    ;% rtDW.plzxjtiyrv
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 66848;

                    ;% rtDW.jookwiu0tz
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 66850;

                    ;% rtDW.gwf111r5cb
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 73516;

                    ;% rtDW.ga5s5ik0xv
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 73518;

                    ;% rtDW.jqooyst0rm
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 73520;

                    ;% rtDW.d3ckza5q5a
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73522;

                    ;% rtDW.a51ghepnze
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 80188;

                    ;% rtDW.hqs2mw0ghn
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 80189;

                    ;% rtDW.eh404m514p
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 80190;

                    ;% rtDW.dhijvgbrcb
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 80191;

                    ;% rtDW.e1h3pdnle0
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 80194;

                    ;% rtDW.fahmpvykdf
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 80195;

                    ;% rtDW.fhiibidmhv
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80196;

                    ;% rtDW.hohmgcvl5b
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 80197;

                    ;% rtDW.aztl5dgba1
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 80198;

                    ;% rtDW.elswac3jyk
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 80199;

                    ;% rtDW.iml3sujeru
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 80200;

                    ;% rtDW.k5zonezswp
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 80201;

                    ;% rtDW.avrp3pl50n
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 80202;

                    ;% rtDW.nhad53qhlh
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 80203;

                    ;% rtDW.bmdokcjl2s
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 80206;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 34;
            section.data(34)  = dumData; %prealloc

                    ;% rtDW.pdwd2qqxba
                    section.data(1).logicalSrcIdx = 89;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.d3svesmau2
                    section.data(2).logicalSrcIdx = 90;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ctpmr0qy2w
                    section.data(3).logicalSrcIdx = 91;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gn4tdbf40k
                    section.data(4).logicalSrcIdx = 92;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jnvtrrqjab
                    section.data(5).logicalSrcIdx = 93;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ihbnz3xv44
                    section.data(6).logicalSrcIdx = 94;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dewjhbtsof
                    section.data(7).logicalSrcIdx = 95;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.czyrktcsyd
                    section.data(8).logicalSrcIdx = 96;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.fyx05x0zdv
                    section.data(9).logicalSrcIdx = 97;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eyk03rsw5y
                    section.data(10).logicalSrcIdx = 98;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.bvobfiadqb
                    section.data(11).logicalSrcIdx = 99;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.cnspotbbsa.TimePtr
                    section.data(12).logicalSrcIdx = 100;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.ckxcz3qb0c.TimePtr
                    section.data(13).logicalSrcIdx = 101;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.nkgor1datg.TimePtr
                    section.data(14).logicalSrcIdx = 102;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.al5kuxfjwn.LoggedData
                    section.data(15).logicalSrcIdx = 103;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.pwtoor2sjt.TimePtr
                    section.data(16).logicalSrcIdx = 104;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.bsgf2ryqdu.LoggedData
                    section.data(17).logicalSrcIdx = 105;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.k03x2e2zwo.AQHandles
                    section.data(18).logicalSrcIdx = 106;
                    section.data(18).dtTransOffset = 20;

                    ;% rtDW.b1iol10x4w.AQHandles
                    section.data(19).logicalSrcIdx = 107;
                    section.data(19).dtTransOffset = 21;

                    ;% rtDW.pru2b1vufe.AQHandles
                    section.data(20).logicalSrcIdx = 108;
                    section.data(20).dtTransOffset = 22;

                    ;% rtDW.iiuqq1u2xy.AQHandles
                    section.data(21).logicalSrcIdx = 109;
                    section.data(21).dtTransOffset = 23;

                    ;% rtDW.ajopsahum1.LoggedData
                    section.data(22).logicalSrcIdx = 110;
                    section.data(22).dtTransOffset = 24;

                    ;% rtDW.elrlc2i1p2.AQHandles
                    section.data(23).logicalSrcIdx = 111;
                    section.data(23).dtTransOffset = 26;

                    ;% rtDW.ht2kgpwizw.AQHandles
                    section.data(24).logicalSrcIdx = 112;
                    section.data(24).dtTransOffset = 27;

                    ;% rtDW.hb0mah0exy.AQHandles
                    section.data(25).logicalSrcIdx = 113;
                    section.data(25).dtTransOffset = 28;

                    ;% rtDW.gvx2zg2cea.AQHandles
                    section.data(26).logicalSrcIdx = 114;
                    section.data(26).dtTransOffset = 29;

                    ;% rtDW.nuyoxo0cqz.AQHandles
                    section.data(27).logicalSrcIdx = 115;
                    section.data(27).dtTransOffset = 30;

                    ;% rtDW.gww0cv0ikt.LoggedData
                    section.data(28).logicalSrcIdx = 116;
                    section.data(28).dtTransOffset = 31;

                    ;% rtDW.bsvedga4ar.LoggedData
                    section.data(29).logicalSrcIdx = 117;
                    section.data(29).dtTransOffset = 34;

                    ;% rtDW.g2zj3hehp4.AQHandles
                    section.data(30).logicalSrcIdx = 118;
                    section.data(30).dtTransOffset = 36;

                    ;% rtDW.c4ulfwrxhx.AQHandles
                    section.data(31).logicalSrcIdx = 119;
                    section.data(31).dtTransOffset = 37;

                    ;% rtDW.jq1p4omjox.AQHandles
                    section.data(32).logicalSrcIdx = 120;
                    section.data(32).dtTransOffset = 38;

                    ;% rtDW.po2vncqjoh.AQHandles
                    section.data(33).logicalSrcIdx = 121;
                    section.data(33).dtTransOffset = 39;

                    ;% rtDW.gkz0y4hq2m.LoggedData
                    section.data(34).logicalSrcIdx = 122;
                    section.data(34).dtTransOffset = 40;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.g0ey1umlvp
                    section.data(1).logicalSrcIdx = 123;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.aoolzur04j
                    section.data(2).logicalSrcIdx = 124;
                    section.data(2).dtTransOffset = 37;

                    ;% rtDW.bgeyshjbzb.PrevIndex
                    section.data(3).logicalSrcIdx = 125;
                    section.data(3).dtTransOffset = 38;

                    ;% rtDW.mjve5455le.PrevIndex
                    section.data(4).logicalSrcIdx = 126;
                    section.data(4).dtTransOffset = 39;

                    ;% rtDW.k1540yevzf.PrevIndex
                    section.data(5).logicalSrcIdx = 127;
                    section.data(5).dtTransOffset = 40;

                    ;% rtDW.blyhnqcwbl.PrevIndex
                    section.data(6).logicalSrcIdx = 128;
                    section.data(6).dtTransOffset = 41;

                    ;% rtDW.cplapuxul1
                    section.data(7).logicalSrcIdx = 129;
                    section.data(7).dtTransOffset = 42;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.ivsks1bx0l
                    section.data(1).logicalSrcIdx = 130;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kqwgkvrpbx
                    section.data(2).logicalSrcIdx = 131;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mrclia2nhj
                    section.data(3).logicalSrcIdx = 132;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.mkfm1nwa4k
                    section.data(4).logicalSrcIdx = 133;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.dfhxi1pprk
                    section.data(5).logicalSrcIdx = 134;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.goxydkgp3m
                    section.data(6).logicalSrcIdx = 135;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 28;
            section.data(28)  = dumData; %prealloc

                    ;% rtDW.pesmq01kos
                    section.data(1).logicalSrcIdx = 136;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ad2rr00kcq
                    section.data(2).logicalSrcIdx = 137;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mfooylrov2
                    section.data(3).logicalSrcIdx = 138;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.a0ow33ilzk
                    section.data(4).logicalSrcIdx = 139;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bkwrvqxkf1
                    section.data(5).logicalSrcIdx = 140;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.j50udee3q4
                    section.data(6).logicalSrcIdx = 141;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.irp0xx4avl
                    section.data(7).logicalSrcIdx = 142;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.p5powm1gdp
                    section.data(8).logicalSrcIdx = 143;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.puogz2oxpb
                    section.data(9).logicalSrcIdx = 144;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.h4yemslxzv
                    section.data(10).logicalSrcIdx = 145;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ib045naqql
                    section.data(11).logicalSrcIdx = 146;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.htly4042cc
                    section.data(12).logicalSrcIdx = 147;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.lmniz4owhh
                    section.data(13).logicalSrcIdx = 148;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hwjumjs5x1
                    section.data(14).logicalSrcIdx = 149;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.e4kyxoj0nc
                    section.data(15).logicalSrcIdx = 150;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.nihpeweagh
                    section.data(16).logicalSrcIdx = 151;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.moyclcqaxp
                    section.data(17).logicalSrcIdx = 152;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.baseatbrhl
                    section.data(18).logicalSrcIdx = 153;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.o5sglifuzn
                    section.data(19).logicalSrcIdx = 154;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.iphlqctr2v
                    section.data(20).logicalSrcIdx = 155;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.pwkdcusirn
                    section.data(21).logicalSrcIdx = 156;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.dzmkslhpoi
                    section.data(22).logicalSrcIdx = 157;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.lc0mv3azov
                    section.data(23).logicalSrcIdx = 158;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.j4reyhjks0
                    section.data(24).logicalSrcIdx = 159;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.mxcgazvi0e
                    section.data(25).logicalSrcIdx = 160;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.iwne4nroqk
                    section.data(26).logicalSrcIdx = 161;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.juff0j4zxc
                    section.data(27).logicalSrcIdx = 162;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.hdnm0in5gu
                    section.data(28).logicalSrcIdx = 163;
                    section.data(28).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.hd1wmr0d1r
                    section.data(1).logicalSrcIdx = 164;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jdpempr5r1
                    section.data(2).logicalSrcIdx = 165;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.csrr5dodrz
                    section.data(3).logicalSrcIdx = 166;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jdkwfeajym
                    section.data(4).logicalSrcIdx = 167;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ibt15oxvor
                    section.data(5).logicalSrcIdx = 168;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.cwc1wqm0vk
                    section.data(6).logicalSrcIdx = 169;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.mbinizmvii
                    section.data(7).logicalSrcIdx = 170;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.lwuyrwvpiz
                    section.data(8).logicalSrcIdx = 171;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.p0iycn1rso
                    section.data(9).logicalSrcIdx = 172;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.muorklbp1c
                    section.data(10).logicalSrcIdx = 173;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.m13d2twz41
                    section.data(11).logicalSrcIdx = 174;
                    section.data(11).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gl43fmrisv.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 175;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gl43fmrisv.ovi3mu0twa
                    section.data(1).logicalSrcIdx = 176;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hujlteqo2z.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 177;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hujlteqo2z.ovi3mu0twa
                    section.data(1).logicalSrcIdx = 178;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 581508109;
    targMap.checksum1 = 1585328028;
    targMap.checksum2 = 4087557293;
    targMap.checksum3 = 2265931419;

