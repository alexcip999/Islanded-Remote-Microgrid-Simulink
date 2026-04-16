    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 8;
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
            section.nData     = 80;
            section.data(80)  = dumData; %prealloc

                    ;% rtP.Kdroop_fp1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Kdroop_fp2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Kdroop_vq1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Kdroop_vq2
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Ki_vd
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Ki_vq
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Kp_vd
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Kp_vq
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Ts
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Vdc1
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Vdc2
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Vrms
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.consensus_enable
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.fgrid
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.VdDiscretePIController_InitialConditionForIntegrator
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.VqDiscretePIController_InitialConditionForIntegrator
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.VdDiscretePIController_InitialConditionForIntegrator_idipyi4en2
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.VqDiscretePIController_InitialConditionForIntegrator_etog44td1j
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.VdDiscretePIController_InitialConditionForIntegrator_gssmkrt2xm
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.VqDiscretePIController_InitialConditionForIntegrator_bulibzbskb
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.PowerMeasurementThreePhase_K
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.PowerMeasurementThreePhase_K_hy3xpce12q
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.PowerMeasurementThreePhase_K_lv1kqhouh3
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_oyh5wkhpw5
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_ijukse4fmn
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_bot0muxzza
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Ki_LF
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase2_Ki_LF
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_ndbawt3bd0
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_o4bm2w3kru
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Kp_LF
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_evcqlc0f5m
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase2_Kp_LF
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit_kzdnvpoxxj
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit_l3t03oryem
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit_kz3vnchm2v
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit_kdbqorizbz
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.irradiance_OutValues
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.irradiance_OutValues_bih3ladc5h
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 65;

                    ;% rtP.irradiance_OutValues_nsiphvuf0l
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 89;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 113;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_b1r3iy3lau
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 114;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_bgpyya2ta5
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 115;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Theta0
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 116;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_oksq2l2odz
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 117;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase2_Theta0
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 118;

                    ;% rtP.irradiance_TimeValues
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 119;

                    ;% rtP.irradiance_TimeValues_md2pkqwexe
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 143;

                    ;% rtP.irradiance_TimeValues_ohjnxc3j3a
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 167;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 191;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 192;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit_clg5ygz5v5
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 193;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit_bclvwasnsn
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 194;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit_iu25xdyh5t
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 195;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit_m00aecvesl
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 196;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 197;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_gca2pndy5y
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 198;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kxsgugcvmz
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 199;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_k5nbqzap3x
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 200;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_j1fs2ybfet
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 201;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_l1ge2hpuwo
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 202;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_l0mfddutlu
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 203;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_erg5yu5yxu
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 204;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_fueszddsu3
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 205;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 206;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_kpwvhjlgaq
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 207;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_c5wjg5w2lg
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 208;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_cl5dytyjkn
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 209;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_larzdloser
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 210;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_eplr3xetm2
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 211;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_aj0bheagem
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 212;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_k3s5fw1q11
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 213;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_pfvmmi1la5
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 214;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 215;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_h1m1w5hlay
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 216;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_d1tmlkjbeb
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 217;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.LimitedCounter_uplimit
                    section.data(1).logicalSrcIdx = 80;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.LimitedCounter_uplimit_g1dxlmsgnr
                    section.data(2).logicalSrcIdx = 81;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.LimitedCounter_uplimit_igunnonrbq
                    section.data(3).logicalSrcIdx = 82;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 318;
            section.data(318)  = dumData; %prealloc

                    ;% rtP.Gain1_Gain
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Gain1_Gain_ollxa44d1e
                    section.data(2).logicalSrcIdx = 84;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Gain2_Gain
                    section.data(3).logicalSrcIdx = 85;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain1_Gain_b2wmxmysa4
                    section.data(4).logicalSrcIdx = 86;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Gain1_Gain_cvrz05eflz
                    section.data(5).logicalSrcIdx = 87;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Gain1_Gain_msdjc3sds3
                    section.data(6).logicalSrcIdx = 88;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Gain1_Gain_bct5xv0x0d
                    section.data(7).logicalSrcIdx = 89;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Gain1_Gain_fdb215vbov
                    section.data(8).logicalSrcIdx = 90;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Gain3_Gain
                    section.data(9).logicalSrcIdx = 91;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Gain1_Gain_hzadu4huns
                    section.data(10).logicalSrcIdx = 92;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Gain1_Gain_caxz35q2gc
                    section.data(11).logicalSrcIdx = 93;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Gain2_Gain_fkhwdbr2xf
                    section.data(12).logicalSrcIdx = 94;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Gain1_Gain_kzsdhtloji
                    section.data(13).logicalSrcIdx = 95;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.Gain1_Gain_im4ln3hgws
                    section.data(14).logicalSrcIdx = 96;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Gain1_Gain_ig1ss2ojir
                    section.data(15).logicalSrcIdx = 97;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.Gain1_Gain_ons3rxrahf
                    section.data(16).logicalSrcIdx = 98;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Gain1_Gain_pxruile2ng
                    section.data(17).logicalSrcIdx = 99;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Gain3_Gain_ku2mah5vw0
                    section.data(18).logicalSrcIdx = 100;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Gain1_Gain_hvibkncikn
                    section.data(19).logicalSrcIdx = 101;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Gain1_Gain_cohj3ivdut
                    section.data(20).logicalSrcIdx = 102;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Gain2_Gain_baxagmh5sx
                    section.data(21).logicalSrcIdx = 103;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Gain1_Gain_gwqai41ur5
                    section.data(22).logicalSrcIdx = 104;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Gain1_Gain_ni1o2fj5jc
                    section.data(23).logicalSrcIdx = 105;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Gain1_Gain_lbxu4rnwa3
                    section.data(24).logicalSrcIdx = 106;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Gain1_Gain_fn55yxgya0
                    section.data(25).logicalSrcIdx = 107;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Gain1_Gain_k34zhdvtun
                    section.data(26).logicalSrcIdx = 108;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Gain3_Gain_mwgazgibme
                    section.data(27).logicalSrcIdx = 109;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.Connectat2s_Time
                    section.data(28).logicalSrcIdx = 110;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.Connectat2s_Y0
                    section.data(29).logicalSrcIdx = 111;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Connectat2s_YFinal
                    section.data(30).logicalSrcIdx = 112;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.Connectat4s_Time
                    section.data(31).logicalSrcIdx = 113;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.Connectat4s_Y0
                    section.data(32).logicalSrcIdx = 114;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.Connectat4s_YFinal
                    section.data(33).logicalSrcIdx = 115;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(34).logicalSrcIdx = 116;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(35).logicalSrcIdx = 117;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.SampleTimeMath_WtEt
                    section.data(36).logicalSrcIdx = 118;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.UnitDelay1_InitialCondition_lapzeesnb2
                    section.data(37).logicalSrcIdx = 119;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.UnitDelay_InitialCondition_eb3rjuvtg0
                    section.data(38).logicalSrcIdx = 120;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.SampleTimeMath_WtEt_gemlxxvjnm
                    section.data(39).logicalSrcIdx = 121;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.UnitDelay1_InitialCondition_hriuw4at3i
                    section.data(40).logicalSrcIdx = 122;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.UnitDelay_InitialCondition_ptowdeldtu
                    section.data(41).logicalSrcIdx = 123;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.SampleTimeMath_WtEt_b3v5oae3wt
                    section.data(42).logicalSrcIdx = 124;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Integrator_gainval
                    section.data(43).logicalSrcIdx = 125;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Gain1_Gain_losnrngiyc
                    section.data(44).logicalSrcIdx = 126;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Constant1_Value
                    section.data(45).logicalSrcIdx = 127;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Integrator_gainval_carz0grxbg
                    section.data(46).logicalSrcIdx = 128;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Integrator_UpperSat
                    section.data(47).logicalSrcIdx = 129;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.Integrator_LowerSat
                    section.data(48).logicalSrcIdx = 130;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Saturation_UpperSat
                    section.data(49).logicalSrcIdx = 131;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.Saturation_LowerSat
                    section.data(50).logicalSrcIdx = 132;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.Gain1_Gain_dzyyjzode5
                    section.data(51).logicalSrcIdx = 133;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.TransportDelay_Delay
                    section.data(52).logicalSrcIdx = 134;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.TransportDelay_InitOutput
                    section.data(53).logicalSrcIdx = 135;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.TransportDelay1_Delay
                    section.data(54).logicalSrcIdx = 136;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.TransportDelay1_InitOutput
                    section.data(55).logicalSrcIdx = 137;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(56).logicalSrcIdx = 138;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(57).logicalSrcIdx = 139;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(58).logicalSrcIdx = 140;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(59).logicalSrcIdx = 141;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Gain_Gain
                    section.data(60).logicalSrcIdx = 142;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.fromWS_Signal1_Time0
                    section.data(61).logicalSrcIdx = 143;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.fromWS_Signal1_Data0
                    section.data(62).logicalSrcIdx = 144;
                    section.data(62).dtTransOffset = 64;

                    ;% rtP.Integrator_gainval_avayg33ayj
                    section.data(63).logicalSrcIdx = 145;
                    section.data(63).dtTransOffset = 68;

                    ;% rtP.Integrator_gainval_bh1byogw3o
                    section.data(64).logicalSrcIdx = 146;
                    section.data(64).dtTransOffset = 69;

                    ;% rtP.Integrator_IC
                    section.data(65).logicalSrcIdx = 147;
                    section.data(65).dtTransOffset = 70;

                    ;% rtP.UnitDelay1_InitialCondition_igxde5r1oa
                    section.data(66).logicalSrcIdx = 148;
                    section.data(66).dtTransOffset = 71;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(67).logicalSrcIdx = 149;
                    section.data(67).dtTransOffset = 72;

                    ;% rtP.Delay_InitialCondition
                    section.data(68).logicalSrcIdx = 150;
                    section.data(68).dtTransOffset = 73;

                    ;% rtP.Gain_Gain_a0tugaykcq
                    section.data(69).logicalSrcIdx = 151;
                    section.data(69).dtTransOffset = 74;

                    ;% rtP.Integrator_gainval_g1hx0pgpel
                    section.data(70).logicalSrcIdx = 152;
                    section.data(70).dtTransOffset = 75;

                    ;% rtP.Integrator_IC_g4xqnrlohi
                    section.data(71).logicalSrcIdx = 153;
                    section.data(71).dtTransOffset = 76;

                    ;% rtP.UnitDelay1_InitialCondition_mkjhh3hej3
                    section.data(72).logicalSrcIdx = 154;
                    section.data(72).dtTransOffset = 77;

                    ;% rtP.UnitDelay2_InitialCondition_ky4da5qoff
                    section.data(73).logicalSrcIdx = 155;
                    section.data(73).dtTransOffset = 78;

                    ;% rtP.Delay_InitialCondition_pxsgay3n2d
                    section.data(74).logicalSrcIdx = 156;
                    section.data(74).dtTransOffset = 79;

                    ;% rtP.Gain_Gain_msl2mctrek
                    section.data(75).logicalSrcIdx = 157;
                    section.data(75).dtTransOffset = 80;

                    ;% rtP.Integrator_gainval_g2bxhp4r3m
                    section.data(76).logicalSrcIdx = 158;
                    section.data(76).dtTransOffset = 81;

                    ;% rtP.Integrator_IC_ol30bkacbk
                    section.data(77).logicalSrcIdx = 159;
                    section.data(77).dtTransOffset = 82;

                    ;% rtP.UnitDelay1_InitialCondition_mwdjagajvk
                    section.data(78).logicalSrcIdx = 160;
                    section.data(78).dtTransOffset = 83;

                    ;% rtP.UnitDelay2_InitialCondition_oacume4w23
                    section.data(79).logicalSrcIdx = 161;
                    section.data(79).dtTransOffset = 84;

                    ;% rtP.Delay_InitialCondition_jdzlvwaqw3
                    section.data(80).logicalSrcIdx = 162;
                    section.data(80).dtTransOffset = 85;

                    ;% rtP.Gain_Gain_ka0ohvwpd2
                    section.data(81).logicalSrcIdx = 163;
                    section.data(81).dtTransOffset = 86;

                    ;% rtP.Integrator_gainval_nec3pprea3
                    section.data(82).logicalSrcIdx = 164;
                    section.data(82).dtTransOffset = 87;

                    ;% rtP.Integrator_IC_fe5bpfeox5
                    section.data(83).logicalSrcIdx = 165;
                    section.data(83).dtTransOffset = 88;

                    ;% rtP.UnitDelay1_InitialCondition_jazgyvwy0b
                    section.data(84).logicalSrcIdx = 166;
                    section.data(84).dtTransOffset = 89;

                    ;% rtP.UnitDelay2_InitialCondition_c335id2yur
                    section.data(85).logicalSrcIdx = 167;
                    section.data(85).dtTransOffset = 90;

                    ;% rtP.Delay_InitialCondition_kvqzfvuqvw
                    section.data(86).logicalSrcIdx = 168;
                    section.data(86).dtTransOffset = 91;

                    ;% rtP.Gain_Gain_n2i2fdezd0
                    section.data(87).logicalSrcIdx = 169;
                    section.data(87).dtTransOffset = 92;

                    ;% rtP.Integrator_gainval_iydjvvm3uf
                    section.data(88).logicalSrcIdx = 170;
                    section.data(88).dtTransOffset = 93;

                    ;% rtP.Integrator_IC_klk0nn5nsf
                    section.data(89).logicalSrcIdx = 171;
                    section.data(89).dtTransOffset = 94;

                    ;% rtP.UnitDelay1_InitialCondition_lqiknbltiv
                    section.data(90).logicalSrcIdx = 172;
                    section.data(90).dtTransOffset = 95;

                    ;% rtP.UnitDelay2_InitialCondition_lq1eghcbab
                    section.data(91).logicalSrcIdx = 173;
                    section.data(91).dtTransOffset = 96;

                    ;% rtP.Delay_InitialCondition_eo1i4emrrh
                    section.data(92).logicalSrcIdx = 174;
                    section.data(92).dtTransOffset = 97;

                    ;% rtP.Gain_Gain_ewisuu03rb
                    section.data(93).logicalSrcIdx = 175;
                    section.data(93).dtTransOffset = 98;

                    ;% rtP.Integrator_gainval_h1oputbahl
                    section.data(94).logicalSrcIdx = 176;
                    section.data(94).dtTransOffset = 99;

                    ;% rtP.Integrator_IC_edmj50xozy
                    section.data(95).logicalSrcIdx = 177;
                    section.data(95).dtTransOffset = 100;

                    ;% rtP.UnitDelay1_InitialCondition_ls5nawmwll
                    section.data(96).logicalSrcIdx = 178;
                    section.data(96).dtTransOffset = 101;

                    ;% rtP.UnitDelay2_InitialCondition_p5x2r4bsum
                    section.data(97).logicalSrcIdx = 179;
                    section.data(97).dtTransOffset = 102;

                    ;% rtP.Delay_InitialCondition_jdx3lhztnl
                    section.data(98).logicalSrcIdx = 180;
                    section.data(98).dtTransOffset = 103;

                    ;% rtP.Gain_Gain_n13h0tbo3s
                    section.data(99).logicalSrcIdx = 181;
                    section.data(99).dtTransOffset = 104;

                    ;% rtP.Gain_Gain_ij5ephcub4
                    section.data(100).logicalSrcIdx = 182;
                    section.data(100).dtTransOffset = 105;

                    ;% rtP.Integrator_IC_i2u0y3f22e
                    section.data(101).logicalSrcIdx = 183;
                    section.data(101).dtTransOffset = 106;

                    ;% rtP.FromWorkspace_Time0
                    section.data(102).logicalSrcIdx = 184;
                    section.data(102).dtTransOffset = 107;

                    ;% rtP.FromWorkspace_Data0
                    section.data(103).logicalSrcIdx = 185;
                    section.data(103).dtTransOffset = 109;

                    ;% rtP.Gain1_Gain_mocebkriwh
                    section.data(104).logicalSrcIdx = 186;
                    section.data(104).dtTransOffset = 111;

                    ;% rtP.Integrator_gainval_gjezqe5f5f
                    section.data(105).logicalSrcIdx = 187;
                    section.data(105).dtTransOffset = 112;

                    ;% rtP.Integrator_gainval_prwo1fbvrt
                    section.data(106).logicalSrcIdx = 188;
                    section.data(106).dtTransOffset = 113;

                    ;% rtP.Gain1_Gain_cwovvihjzo
                    section.data(107).logicalSrcIdx = 189;
                    section.data(107).dtTransOffset = 114;

                    ;% rtP.Initial_Value
                    section.data(108).logicalSrcIdx = 190;
                    section.data(108).dtTransOffset = 115;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_cxzqbmd0qn
                    section.data(109).logicalSrcIdx = 191;
                    section.data(109).dtTransOffset = 116;

                    ;% rtP.avoiddivisionby0_UpperSat
                    section.data(110).logicalSrcIdx = 192;
                    section.data(110).dtTransOffset = 117;

                    ;% rtP.avoiddivisionby0_LowerSat
                    section.data(111).logicalSrcIdx = 193;
                    section.data(111).dtTransOffset = 118;

                    ;% rtP.UnitDelay2_InitialCondition_p5dmi4fyvs
                    section.data(112).logicalSrcIdx = 194;
                    section.data(112).dtTransOffset = 119;

                    ;% rtP.Integrator_gainval_aiqo4pqknj
                    section.data(113).logicalSrcIdx = 195;
                    section.data(113).dtTransOffset = 120;

                    ;% rtP.Gain1_Gain_abh3hvbccc
                    section.data(114).logicalSrcIdx = 196;
                    section.data(114).dtTransOffset = 121;

                    ;% rtP.Constant1_Value_lsknndl14i
                    section.data(115).logicalSrcIdx = 197;
                    section.data(115).dtTransOffset = 122;

                    ;% rtP.Integrator_gainval_j4gmb2gwsc
                    section.data(116).logicalSrcIdx = 198;
                    section.data(116).dtTransOffset = 123;

                    ;% rtP.Integrator_UpperSat_lm3ewrrsxh
                    section.data(117).logicalSrcIdx = 199;
                    section.data(117).dtTransOffset = 124;

                    ;% rtP.Integrator_LowerSat_hjh2vovvsr
                    section.data(118).logicalSrcIdx = 200;
                    section.data(118).dtTransOffset = 125;

                    ;% rtP.Saturation_UpperSat_gox4btb11r
                    section.data(119).logicalSrcIdx = 201;
                    section.data(119).dtTransOffset = 126;

                    ;% rtP.Saturation_LowerSat_axo2ygf3i0
                    section.data(120).logicalSrcIdx = 202;
                    section.data(120).dtTransOffset = 127;

                    ;% rtP.Gain1_Gain_e2meerxskp
                    section.data(121).logicalSrcIdx = 203;
                    section.data(121).dtTransOffset = 128;

                    ;% rtP.TransportDelay_Delay_ag53vhwsyv
                    section.data(122).logicalSrcIdx = 204;
                    section.data(122).dtTransOffset = 129;

                    ;% rtP.TransportDelay_InitOutput_hyaxfclhky
                    section.data(123).logicalSrcIdx = 205;
                    section.data(123).dtTransOffset = 130;

                    ;% rtP.TransportDelay1_Delay_fmvsbqj5tj
                    section.data(124).logicalSrcIdx = 206;
                    section.data(124).dtTransOffset = 131;

                    ;% rtP.TransportDelay1_InitOutput_pmbwserd04
                    section.data(125).logicalSrcIdx = 207;
                    section.data(125).dtTransOffset = 132;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_bfxxjmpabm
                    section.data(126).logicalSrcIdx = 208;
                    section.data(126).dtTransOffset = 133;

                    ;% rtP.DiscreteTimeIntegrator1_IC_akx0cgm0yv
                    section.data(127).logicalSrcIdx = 209;
                    section.data(127).dtTransOffset = 134;

                    ;% rtP.DiscreteTimeIntegrator_gainval_lrim5qbkf2
                    section.data(128).logicalSrcIdx = 210;
                    section.data(128).dtTransOffset = 135;

                    ;% rtP.DiscreteTimeIntegrator_IC_nxtwlpx203
                    section.data(129).logicalSrcIdx = 211;
                    section.data(129).dtTransOffset = 136;

                    ;% rtP.Gain_Gain_ogxlrpbcid
                    section.data(130).logicalSrcIdx = 212;
                    section.data(130).dtTransOffset = 137;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(131).logicalSrcIdx = 213;
                    section.data(131).dtTransOffset = 138;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(132).logicalSrcIdx = 214;
                    section.data(132).dtTransOffset = 142;

                    ;% rtP.Integrator_gainval_nbtau22bcs
                    section.data(133).logicalSrcIdx = 215;
                    section.data(133).dtTransOffset = 146;

                    ;% rtP.Integrator_gainval_lx3n3x4rqc
                    section.data(134).logicalSrcIdx = 216;
                    section.data(134).dtTransOffset = 147;

                    ;% rtP.Integrator_IC_cooq3xxsvj
                    section.data(135).logicalSrcIdx = 217;
                    section.data(135).dtTransOffset = 148;

                    ;% rtP.UnitDelay1_InitialCondition_j5udodixng
                    section.data(136).logicalSrcIdx = 218;
                    section.data(136).dtTransOffset = 149;

                    ;% rtP.UnitDelay2_InitialCondition_lxsa4gacjt
                    section.data(137).logicalSrcIdx = 219;
                    section.data(137).dtTransOffset = 150;

                    ;% rtP.Delay_InitialCondition_a55iiq0o4f
                    section.data(138).logicalSrcIdx = 220;
                    section.data(138).dtTransOffset = 151;

                    ;% rtP.Gain_Gain_g1bxa5yagb
                    section.data(139).logicalSrcIdx = 221;
                    section.data(139).dtTransOffset = 152;

                    ;% rtP.Integrator_gainval_j3zllfw2ya
                    section.data(140).logicalSrcIdx = 222;
                    section.data(140).dtTransOffset = 153;

                    ;% rtP.Integrator_IC_o1gepkaxe2
                    section.data(141).logicalSrcIdx = 223;
                    section.data(141).dtTransOffset = 154;

                    ;% rtP.UnitDelay1_InitialCondition_jfuykwtijp
                    section.data(142).logicalSrcIdx = 224;
                    section.data(142).dtTransOffset = 155;

                    ;% rtP.UnitDelay2_InitialCondition_lratdejrvc
                    section.data(143).logicalSrcIdx = 225;
                    section.data(143).dtTransOffset = 156;

                    ;% rtP.Delay_InitialCondition_iyzd5f3bo1
                    section.data(144).logicalSrcIdx = 226;
                    section.data(144).dtTransOffset = 157;

                    ;% rtP.Gain_Gain_lhnhdifs0e
                    section.data(145).logicalSrcIdx = 227;
                    section.data(145).dtTransOffset = 158;

                    ;% rtP.Integrator_gainval_n4mbdo45bw
                    section.data(146).logicalSrcIdx = 228;
                    section.data(146).dtTransOffset = 159;

                    ;% rtP.Integrator_IC_evhka53zqk
                    section.data(147).logicalSrcIdx = 229;
                    section.data(147).dtTransOffset = 160;

                    ;% rtP.UnitDelay1_InitialCondition_izykpui1wt
                    section.data(148).logicalSrcIdx = 230;
                    section.data(148).dtTransOffset = 161;

                    ;% rtP.UnitDelay2_InitialCondition_ec3b0v2ked
                    section.data(149).logicalSrcIdx = 231;
                    section.data(149).dtTransOffset = 162;

                    ;% rtP.Delay_InitialCondition_bavhdtocgy
                    section.data(150).logicalSrcIdx = 232;
                    section.data(150).dtTransOffset = 163;

                    ;% rtP.Gain_Gain_o4zcph2u4p
                    section.data(151).logicalSrcIdx = 233;
                    section.data(151).dtTransOffset = 164;

                    ;% rtP.Integrator_gainval_paeznd5jot
                    section.data(152).logicalSrcIdx = 234;
                    section.data(152).dtTransOffset = 165;

                    ;% rtP.Integrator_IC_ngdqv10nj2
                    section.data(153).logicalSrcIdx = 235;
                    section.data(153).dtTransOffset = 166;

                    ;% rtP.UnitDelay1_InitialCondition_bosg34hruf
                    section.data(154).logicalSrcIdx = 236;
                    section.data(154).dtTransOffset = 167;

                    ;% rtP.UnitDelay2_InitialCondition_iqiy2ig2a2
                    section.data(155).logicalSrcIdx = 237;
                    section.data(155).dtTransOffset = 168;

                    ;% rtP.Delay_InitialCondition_lcu1ixidx5
                    section.data(156).logicalSrcIdx = 238;
                    section.data(156).dtTransOffset = 169;

                    ;% rtP.Gain_Gain_knn0armyna
                    section.data(157).logicalSrcIdx = 239;
                    section.data(157).dtTransOffset = 170;

                    ;% rtP.Integrator_gainval_cewndrxcpd
                    section.data(158).logicalSrcIdx = 240;
                    section.data(158).dtTransOffset = 171;

                    ;% rtP.Integrator_IC_bwgl5a0wob
                    section.data(159).logicalSrcIdx = 241;
                    section.data(159).dtTransOffset = 172;

                    ;% rtP.UnitDelay1_InitialCondition_nggtcjmvxt
                    section.data(160).logicalSrcIdx = 242;
                    section.data(160).dtTransOffset = 173;

                    ;% rtP.UnitDelay2_InitialCondition_ofqprotkgb
                    section.data(161).logicalSrcIdx = 243;
                    section.data(161).dtTransOffset = 174;

                    ;% rtP.Delay_InitialCondition_hqkwrz2i2i
                    section.data(162).logicalSrcIdx = 244;
                    section.data(162).dtTransOffset = 175;

                    ;% rtP.Gain_Gain_in5c1sqasm
                    section.data(163).logicalSrcIdx = 245;
                    section.data(163).dtTransOffset = 176;

                    ;% rtP.Integrator_gainval_ksirpb4yxq
                    section.data(164).logicalSrcIdx = 246;
                    section.data(164).dtTransOffset = 177;

                    ;% rtP.Integrator_IC_fpbmwehjlf
                    section.data(165).logicalSrcIdx = 247;
                    section.data(165).dtTransOffset = 178;

                    ;% rtP.UnitDelay1_InitialCondition_eyrhkzaysm
                    section.data(166).logicalSrcIdx = 248;
                    section.data(166).dtTransOffset = 179;

                    ;% rtP.UnitDelay2_InitialCondition_eqc4tfjodc
                    section.data(167).logicalSrcIdx = 249;
                    section.data(167).dtTransOffset = 180;

                    ;% rtP.Delay_InitialCondition_gukmfnnmw2
                    section.data(168).logicalSrcIdx = 250;
                    section.data(168).dtTransOffset = 181;

                    ;% rtP.Gain_Gain_dgbqv335s1
                    section.data(169).logicalSrcIdx = 251;
                    section.data(169).dtTransOffset = 182;

                    ;% rtP.Gain_Gain_pcqi2zh5ks
                    section.data(170).logicalSrcIdx = 252;
                    section.data(170).dtTransOffset = 183;

                    ;% rtP.Integrator_IC_dkgbnnaxcx
                    section.data(171).logicalSrcIdx = 253;
                    section.data(171).dtTransOffset = 184;

                    ;% rtP.FromWorkspace2_Time0
                    section.data(172).logicalSrcIdx = 254;
                    section.data(172).dtTransOffset = 185;

                    ;% rtP.FromWorkspace2_Data0
                    section.data(173).logicalSrcIdx = 255;
                    section.data(173).dtTransOffset = 187;

                    ;% rtP.Gain1_Gain_algp55cnlc
                    section.data(174).logicalSrcIdx = 256;
                    section.data(174).dtTransOffset = 189;

                    ;% rtP.Integrator_gainval_f0rqsj0fnp
                    section.data(175).logicalSrcIdx = 257;
                    section.data(175).dtTransOffset = 190;

                    ;% rtP.Integrator_gainval_kexeikjgzm
                    section.data(176).logicalSrcIdx = 258;
                    section.data(176).dtTransOffset = 191;

                    ;% rtP.Gain1_Gain_kbqppqxrgb
                    section.data(177).logicalSrcIdx = 259;
                    section.data(177).dtTransOffset = 192;

                    ;% rtP.Initial_Value_j4wczc1lxq
                    section.data(178).logicalSrcIdx = 260;
                    section.data(178).dtTransOffset = 193;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_arqevlqjww
                    section.data(179).logicalSrcIdx = 261;
                    section.data(179).dtTransOffset = 194;

                    ;% rtP.avoiddivisionby0_UpperSat_nx01wqrouz
                    section.data(180).logicalSrcIdx = 262;
                    section.data(180).dtTransOffset = 195;

                    ;% rtP.avoiddivisionby0_LowerSat_avgk30jeg3
                    section.data(181).logicalSrcIdx = 263;
                    section.data(181).dtTransOffset = 196;

                    ;% rtP.UnitDelay2_InitialCondition_pvc43f4wjv
                    section.data(182).logicalSrcIdx = 264;
                    section.data(182).dtTransOffset = 197;

                    ;% rtP.TransportDelay_Delay_izcnkbe2wi
                    section.data(183).logicalSrcIdx = 265;
                    section.data(183).dtTransOffset = 198;

                    ;% rtP.TransportDelay_InitOutput_k5gst0lfyo
                    section.data(184).logicalSrcIdx = 266;
                    section.data(184).dtTransOffset = 199;

                    ;% rtP.TransportDelay1_Delay_dk3mzioqw3
                    section.data(185).logicalSrcIdx = 267;
                    section.data(185).dtTransOffset = 200;

                    ;% rtP.TransportDelay1_InitOutput_ejlrjlsqup
                    section.data(186).logicalSrcIdx = 268;
                    section.data(186).dtTransOffset = 201;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_lhqt0qv2qk
                    section.data(187).logicalSrcIdx = 269;
                    section.data(187).dtTransOffset = 202;

                    ;% rtP.DiscreteTimeIntegrator1_IC_m2jgh5qyk1
                    section.data(188).logicalSrcIdx = 270;
                    section.data(188).dtTransOffset = 203;

                    ;% rtP.DiscreteTimeIntegrator_gainval_pzbscb2dgk
                    section.data(189).logicalSrcIdx = 271;
                    section.data(189).dtTransOffset = 204;

                    ;% rtP.DiscreteTimeIntegrator_IC_b2sfx3ah05
                    section.data(190).logicalSrcIdx = 272;
                    section.data(190).dtTransOffset = 205;

                    ;% rtP.Gain_Gain_kq0niozbc5
                    section.data(191).logicalSrcIdx = 273;
                    section.data(191).dtTransOffset = 206;

                    ;% rtP.FromWorkspace3_Time0
                    section.data(192).logicalSrcIdx = 274;
                    section.data(192).dtTransOffset = 207;

                    ;% rtP.FromWorkspace3_Data0
                    section.data(193).logicalSrcIdx = 275;
                    section.data(193).dtTransOffset = 211;

                    ;% rtP.Integrator_gainval_ahxjep3p5p
                    section.data(194).logicalSrcIdx = 276;
                    section.data(194).dtTransOffset = 215;

                    ;% rtP.Integrator_gainval_pbso3ycv2d
                    section.data(195).logicalSrcIdx = 277;
                    section.data(195).dtTransOffset = 216;

                    ;% rtP.Integrator_IC_h1ouwyjlzl
                    section.data(196).logicalSrcIdx = 278;
                    section.data(196).dtTransOffset = 217;

                    ;% rtP.UnitDelay1_InitialCondition_cgxxcocs4s
                    section.data(197).logicalSrcIdx = 279;
                    section.data(197).dtTransOffset = 218;

                    ;% rtP.UnitDelay2_InitialCondition_hhehkol3fa
                    section.data(198).logicalSrcIdx = 280;
                    section.data(198).dtTransOffset = 219;

                    ;% rtP.Delay_InitialCondition_ddh40vsr3t
                    section.data(199).logicalSrcIdx = 281;
                    section.data(199).dtTransOffset = 220;

                    ;% rtP.Gain_Gain_gwwfpij2iq
                    section.data(200).logicalSrcIdx = 282;
                    section.data(200).dtTransOffset = 221;

                    ;% rtP.Integrator_gainval_cyffhr2fxj
                    section.data(201).logicalSrcIdx = 283;
                    section.data(201).dtTransOffset = 222;

                    ;% rtP.Integrator_IC_mtgfl3pc1e
                    section.data(202).logicalSrcIdx = 284;
                    section.data(202).dtTransOffset = 223;

                    ;% rtP.UnitDelay1_InitialCondition_bv5cpaofvt
                    section.data(203).logicalSrcIdx = 285;
                    section.data(203).dtTransOffset = 224;

                    ;% rtP.UnitDelay2_InitialCondition_ikxstlqnas
                    section.data(204).logicalSrcIdx = 286;
                    section.data(204).dtTransOffset = 225;

                    ;% rtP.Delay_InitialCondition_ivoe0dxkdl
                    section.data(205).logicalSrcIdx = 287;
                    section.data(205).dtTransOffset = 226;

                    ;% rtP.Gain_Gain_hflrybppcq
                    section.data(206).logicalSrcIdx = 288;
                    section.data(206).dtTransOffset = 227;

                    ;% rtP.Integrator_gainval_oxrkjfp04d
                    section.data(207).logicalSrcIdx = 289;
                    section.data(207).dtTransOffset = 228;

                    ;% rtP.Integrator_IC_jd5bzj55rq
                    section.data(208).logicalSrcIdx = 290;
                    section.data(208).dtTransOffset = 229;

                    ;% rtP.UnitDelay1_InitialCondition_lvkomzlglt
                    section.data(209).logicalSrcIdx = 291;
                    section.data(209).dtTransOffset = 230;

                    ;% rtP.UnitDelay2_InitialCondition_kmkxa45nkb
                    section.data(210).logicalSrcIdx = 292;
                    section.data(210).dtTransOffset = 231;

                    ;% rtP.Delay_InitialCondition_a3mojsdztd
                    section.data(211).logicalSrcIdx = 293;
                    section.data(211).dtTransOffset = 232;

                    ;% rtP.Gain_Gain_ftzrjj0sqw
                    section.data(212).logicalSrcIdx = 294;
                    section.data(212).dtTransOffset = 233;

                    ;% rtP.Integrator_gainval_ezctj4bywa
                    section.data(213).logicalSrcIdx = 295;
                    section.data(213).dtTransOffset = 234;

                    ;% rtP.Integrator_IC_gsxtt4cmq1
                    section.data(214).logicalSrcIdx = 296;
                    section.data(214).dtTransOffset = 235;

                    ;% rtP.UnitDelay1_InitialCondition_exvwnxkrww
                    section.data(215).logicalSrcIdx = 297;
                    section.data(215).dtTransOffset = 236;

                    ;% rtP.UnitDelay2_InitialCondition_obmwqqvxne
                    section.data(216).logicalSrcIdx = 298;
                    section.data(216).dtTransOffset = 237;

                    ;% rtP.Delay_InitialCondition_b0vl0cmjmc
                    section.data(217).logicalSrcIdx = 299;
                    section.data(217).dtTransOffset = 238;

                    ;% rtP.Gain_Gain_obz4iokbyq
                    section.data(218).logicalSrcIdx = 300;
                    section.data(218).dtTransOffset = 239;

                    ;% rtP.Integrator_gainval_jdfknowkci
                    section.data(219).logicalSrcIdx = 301;
                    section.data(219).dtTransOffset = 240;

                    ;% rtP.Integrator_IC_epwuivlfs3
                    section.data(220).logicalSrcIdx = 302;
                    section.data(220).dtTransOffset = 241;

                    ;% rtP.UnitDelay1_InitialCondition_p1zpbusiyu
                    section.data(221).logicalSrcIdx = 303;
                    section.data(221).dtTransOffset = 242;

                    ;% rtP.UnitDelay2_InitialCondition_mgcpqa3zzr
                    section.data(222).logicalSrcIdx = 304;
                    section.data(222).dtTransOffset = 243;

                    ;% rtP.Delay_InitialCondition_arubxx0klf
                    section.data(223).logicalSrcIdx = 305;
                    section.data(223).dtTransOffset = 244;

                    ;% rtP.Gain_Gain_nzyqrsdu3c
                    section.data(224).logicalSrcIdx = 306;
                    section.data(224).dtTransOffset = 245;

                    ;% rtP.Integrator_gainval_fzk23ctaif
                    section.data(225).logicalSrcIdx = 307;
                    section.data(225).dtTransOffset = 246;

                    ;% rtP.Integrator_IC_pr03fmn2sd
                    section.data(226).logicalSrcIdx = 308;
                    section.data(226).dtTransOffset = 247;

                    ;% rtP.UnitDelay1_InitialCondition_bt4t0halnj
                    section.data(227).logicalSrcIdx = 309;
                    section.data(227).dtTransOffset = 248;

                    ;% rtP.UnitDelay2_InitialCondition_mypoysaslg
                    section.data(228).logicalSrcIdx = 310;
                    section.data(228).dtTransOffset = 249;

                    ;% rtP.Delay_InitialCondition_lzhgqzrejx
                    section.data(229).logicalSrcIdx = 311;
                    section.data(229).dtTransOffset = 250;

                    ;% rtP.Gain_Gain_l2ucys2o0m
                    section.data(230).logicalSrcIdx = 312;
                    section.data(230).dtTransOffset = 251;

                    ;% rtP.Gain_Gain_bca50qwkub
                    section.data(231).logicalSrcIdx = 313;
                    section.data(231).dtTransOffset = 252;

                    ;% rtP.Integrator_IC_agqg1sdexr
                    section.data(232).logicalSrcIdx = 314;
                    section.data(232).dtTransOffset = 253;

                    ;% rtP.FromWorkspace4_Time0
                    section.data(233).logicalSrcIdx = 315;
                    section.data(233).dtTransOffset = 254;

                    ;% rtP.FromWorkspace4_Data0
                    section.data(234).logicalSrcIdx = 316;
                    section.data(234).dtTransOffset = 256;

                    ;% rtP.Integrator_gainval_jhhvlx1lpl
                    section.data(235).logicalSrcIdx = 317;
                    section.data(235).dtTransOffset = 258;

                    ;% rtP.Gain1_Gain_mjr0fxq2qk
                    section.data(236).logicalSrcIdx = 318;
                    section.data(236).dtTransOffset = 259;

                    ;% rtP.Integrator_gainval_mwwxxoy1hw
                    section.data(237).logicalSrcIdx = 319;
                    section.data(237).dtTransOffset = 260;

                    ;% rtP.Integrator_gainval_lush1uefdg
                    section.data(238).logicalSrcIdx = 320;
                    section.data(238).dtTransOffset = 261;

                    ;% rtP.Gain1_Gain_keb3f545ka
                    section.data(239).logicalSrcIdx = 321;
                    section.data(239).dtTransOffset = 262;

                    ;% rtP.Initial_Value_mag4dchvul
                    section.data(240).logicalSrcIdx = 322;
                    section.data(240).dtTransOffset = 263;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_dmo3pxfbdw
                    section.data(241).logicalSrcIdx = 323;
                    section.data(241).dtTransOffset = 264;

                    ;% rtP.avoiddivisionby0_UpperSat_gfuc11gpp5
                    section.data(242).logicalSrcIdx = 324;
                    section.data(242).dtTransOffset = 265;

                    ;% rtP.avoiddivisionby0_LowerSat_l1ezajoazx
                    section.data(243).logicalSrcIdx = 325;
                    section.data(243).dtTransOffset = 266;

                    ;% rtP.Constant1_Value_buq2kee35c
                    section.data(244).logicalSrcIdx = 326;
                    section.data(244).dtTransOffset = 267;

                    ;% rtP.Gain1_Gain_d1xwfhjjnr
                    section.data(245).logicalSrcIdx = 327;
                    section.data(245).dtTransOffset = 268;

                    ;% rtP.Integrator_gainval_ppqev0mi5y
                    section.data(246).logicalSrcIdx = 328;
                    section.data(246).dtTransOffset = 269;

                    ;% rtP.Integrator_UpperSat_iete0r0rnz
                    section.data(247).logicalSrcIdx = 329;
                    section.data(247).dtTransOffset = 270;

                    ;% rtP.Integrator_LowerSat_btvxn34idf
                    section.data(248).logicalSrcIdx = 330;
                    section.data(248).dtTransOffset = 271;

                    ;% rtP.Saturation_UpperSat_lw2wjh2pg2
                    section.data(249).logicalSrcIdx = 331;
                    section.data(249).dtTransOffset = 272;

                    ;% rtP.Saturation_LowerSat_bpbfg0cqou
                    section.data(250).logicalSrcIdx = 332;
                    section.data(250).dtTransOffset = 273;

                    ;% rtP.UnitDelay2_InitialCondition_gwbtuxvj4q
                    section.data(251).logicalSrcIdx = 333;
                    section.data(251).dtTransOffset = 274;

                    ;% rtP.Gain_Gain_edy3rsxlbj
                    section.data(252).logicalSrcIdx = 334;
                    section.data(252).dtTransOffset = 275;

                    ;% rtP.Gain_Gain_liiiiertx5
                    section.data(253).logicalSrcIdx = 335;
                    section.data(253).dtTransOffset = 276;

                    ;% rtP.Integrator_gainval_jiozqx4w4v
                    section.data(254).logicalSrcIdx = 336;
                    section.data(254).dtTransOffset = 277;

                    ;% rtP.Gain1_Gain_b4avjwyrj2
                    section.data(255).logicalSrcIdx = 337;
                    section.data(255).dtTransOffset = 278;

                    ;% rtP.Constant1_Value_da1dwznx44
                    section.data(256).logicalSrcIdx = 338;
                    section.data(256).dtTransOffset = 279;

                    ;% rtP.Integrator_gainval_coazxg22nt
                    section.data(257).logicalSrcIdx = 339;
                    section.data(257).dtTransOffset = 280;

                    ;% rtP.Integrator_UpperSat_hpvvxjqfd4
                    section.data(258).logicalSrcIdx = 340;
                    section.data(258).dtTransOffset = 281;

                    ;% rtP.Integrator_LowerSat_i10qscebp4
                    section.data(259).logicalSrcIdx = 341;
                    section.data(259).dtTransOffset = 282;

                    ;% rtP.Saturation_UpperSat_i15q0blda2
                    section.data(260).logicalSrcIdx = 342;
                    section.data(260).dtTransOffset = 283;

                    ;% rtP.Saturation_LowerSat_jx0zzxgaew
                    section.data(261).logicalSrcIdx = 343;
                    section.data(261).dtTransOffset = 284;

                    ;% rtP.Gain1_Gain_gi0auafmvm
                    section.data(262).logicalSrcIdx = 344;
                    section.data(262).dtTransOffset = 285;

                    ;% rtP.Integrator_gainval_o23ns0zq3s
                    section.data(263).logicalSrcIdx = 345;
                    section.data(263).dtTransOffset = 286;

                    ;% rtP.Gain1_Gain_b02alh1u5u
                    section.data(264).logicalSrcIdx = 346;
                    section.data(264).dtTransOffset = 287;

                    ;% rtP.Constant1_Value_ktx3gyatq5
                    section.data(265).logicalSrcIdx = 347;
                    section.data(265).dtTransOffset = 288;

                    ;% rtP.Integrator_gainval_axkjs1f2yw
                    section.data(266).logicalSrcIdx = 348;
                    section.data(266).dtTransOffset = 289;

                    ;% rtP.Integrator_UpperSat_nxtktwi3hv
                    section.data(267).logicalSrcIdx = 349;
                    section.data(267).dtTransOffset = 290;

                    ;% rtP.Integrator_LowerSat_micq5t2bis
                    section.data(268).logicalSrcIdx = 350;
                    section.data(268).dtTransOffset = 291;

                    ;% rtP.Saturation_UpperSat_kp53gt01p2
                    section.data(269).logicalSrcIdx = 351;
                    section.data(269).dtTransOffset = 292;

                    ;% rtP.Saturation_LowerSat_p4o1xc0k2h
                    section.data(270).logicalSrcIdx = 352;
                    section.data(270).dtTransOffset = 293;

                    ;% rtP.Gain1_Gain_kgot1sgoty
                    section.data(271).logicalSrcIdx = 353;
                    section.data(271).dtTransOffset = 294;

                    ;% rtP.Integrator_gainval_fm35sovq5x
                    section.data(272).logicalSrcIdx = 354;
                    section.data(272).dtTransOffset = 295;

                    ;% rtP.Gain1_Gain_ijer0bjrbn
                    section.data(273).logicalSrcIdx = 355;
                    section.data(273).dtTransOffset = 296;

                    ;% rtP.Constant1_Value_lyp1n40hbg
                    section.data(274).logicalSrcIdx = 356;
                    section.data(274).dtTransOffset = 297;

                    ;% rtP.Integrator_gainval_prmqszsrxc
                    section.data(275).logicalSrcIdx = 357;
                    section.data(275).dtTransOffset = 298;

                    ;% rtP.Integrator_UpperSat_eeql1jmjvy
                    section.data(276).logicalSrcIdx = 358;
                    section.data(276).dtTransOffset = 299;

                    ;% rtP.Integrator_LowerSat_jorixs0gkl
                    section.data(277).logicalSrcIdx = 359;
                    section.data(277).dtTransOffset = 300;

                    ;% rtP.Saturation_UpperSat_e4df0el10b
                    section.data(278).logicalSrcIdx = 360;
                    section.data(278).dtTransOffset = 301;

                    ;% rtP.Saturation_LowerSat_f03jyyqk4u
                    section.data(279).logicalSrcIdx = 361;
                    section.data(279).dtTransOffset = 302;

                    ;% rtP.Gain1_Gain_dqel4wppnp
                    section.data(280).logicalSrcIdx = 362;
                    section.data(280).dtTransOffset = 303;

                    ;% rtP.Constant1_Value_lodywi0z2n
                    section.data(281).logicalSrcIdx = 363;
                    section.data(281).dtTransOffset = 304;

                    ;% rtP.Constant1_Value_ipdttkadk5
                    section.data(282).logicalSrcIdx = 364;
                    section.data(282).dtTransOffset = 305;

                    ;% rtP.Constant2_Value
                    section.data(283).logicalSrcIdx = 365;
                    section.data(283).dtTransOffset = 306;

                    ;% rtP.Constant3_Value
                    section.data(284).logicalSrcIdx = 366;
                    section.data(284).dtTransOffset = 307;

                    ;% rtP.Sequence_Value
                    section.data(285).logicalSrcIdx = 367;
                    section.data(285).dtTransOffset = 308;

                    ;% rtP.V0_Value
                    section.data(286).logicalSrcIdx = 368;
                    section.data(286).dtTransOffset = 309;

                    ;% rtP.D_init_Value
                    section.data(287).logicalSrcIdx = 369;
                    section.data(287).dtTransOffset = 310;

                    ;% rtP.D_max_Value
                    section.data(288).logicalSrcIdx = 370;
                    section.data(288).dtTransOffset = 311;

                    ;% rtP.D_min_Value
                    section.data(289).logicalSrcIdx = 371;
                    section.data(289).dtTransOffset = 312;

                    ;% rtP.Delta_D_Value
                    section.data(290).logicalSrcIdx = 372;
                    section.data(290).dtTransOffset = 313;

                    ;% rtP.RTP_DD0943EF_TFIXED_Value
                    section.data(291).logicalSrcIdx = 373;
                    section.data(291).dtTransOffset = 314;

                    ;% rtP.RTP_1D2E87C1_IL_Value
                    section.data(292).logicalSrcIdx = 374;
                    section.data(292).dtTransOffset = 315;

                    ;% rtP.RTP_A18535C3_IL_Value
                    section.data(293).logicalSrcIdx = 375;
                    section.data(293).dtTransOffset = 318;

                    ;% rtP.Constant5_Value
                    section.data(294).logicalSrcIdx = 376;
                    section.data(294).dtTransOffset = 321;

                    ;% rtP.Constant1_Value_brrjsvceec
                    section.data(295).logicalSrcIdx = 377;
                    section.data(295).dtTransOffset = 322;

                    ;% rtP.Constant2_Value_lexwhwkcr1
                    section.data(296).logicalSrcIdx = 378;
                    section.data(296).dtTransOffset = 323;

                    ;% rtP.Constant3_Value_lyqvw4nurv
                    section.data(297).logicalSrcIdx = 379;
                    section.data(297).dtTransOffset = 324;

                    ;% rtP.Sequence_Value_phlzt4e1pz
                    section.data(298).logicalSrcIdx = 380;
                    section.data(298).dtTransOffset = 325;

                    ;% rtP.V0_Value_gfkw3a205u
                    section.data(299).logicalSrcIdx = 381;
                    section.data(299).dtTransOffset = 326;

                    ;% rtP.D_init_Value_dbc3r2jhlx
                    section.data(300).logicalSrcIdx = 382;
                    section.data(300).dtTransOffset = 327;

                    ;% rtP.D_max_Value_egs3yvu4uo
                    section.data(301).logicalSrcIdx = 383;
                    section.data(301).dtTransOffset = 328;

                    ;% rtP.D_min_Value_nxrfycqjlc
                    section.data(302).logicalSrcIdx = 384;
                    section.data(302).dtTransOffset = 329;

                    ;% rtP.Delta_D_Value_cdafqbhbdi
                    section.data(303).logicalSrcIdx = 385;
                    section.data(303).dtTransOffset = 330;

                    ;% rtP.RTP_44647E90_TFIXED_Value
                    section.data(304).logicalSrcIdx = 386;
                    section.data(304).dtTransOffset = 331;

                    ;% rtP.RTP_6A29B757_IL_Value
                    section.data(305).logicalSrcIdx = 387;
                    section.data(305).dtTransOffset = 332;

                    ;% rtP.RTP_D6820555_IL_Value
                    section.data(306).logicalSrcIdx = 388;
                    section.data(306).dtTransOffset = 335;

                    ;% rtP.Constant1_Value_jfo55yym5e
                    section.data(307).logicalSrcIdx = 389;
                    section.data(307).dtTransOffset = 338;

                    ;% rtP.Constant1_Value_awgqj5nudl
                    section.data(308).logicalSrcIdx = 390;
                    section.data(308).dtTransOffset = 339;

                    ;% rtP.Constant2_Value_macqxmzmjc
                    section.data(309).logicalSrcIdx = 391;
                    section.data(309).dtTransOffset = 340;

                    ;% rtP.Constant3_Value_ikjykgbkxu
                    section.data(310).logicalSrcIdx = 392;
                    section.data(310).dtTransOffset = 341;

                    ;% rtP.Sequence_Value_njbgb5r4h4
                    section.data(311).logicalSrcIdx = 393;
                    section.data(311).dtTransOffset = 342;

                    ;% rtP.V0_Value_izm2550djd
                    section.data(312).logicalSrcIdx = 394;
                    section.data(312).dtTransOffset = 343;

                    ;% rtP.D_init_Value_k3ydr0xveb
                    section.data(313).logicalSrcIdx = 395;
                    section.data(313).dtTransOffset = 344;

                    ;% rtP.D_max_Value_ho0x4rix51
                    section.data(314).logicalSrcIdx = 396;
                    section.data(314).dtTransOffset = 345;

                    ;% rtP.D_min_Value_kk1vr0idlb
                    section.data(315).logicalSrcIdx = 397;
                    section.data(315).dtTransOffset = 346;

                    ;% rtP.Delta_D_Value_cid4aod4t0
                    section.data(316).logicalSrcIdx = 398;
                    section.data(316).dtTransOffset = 347;

                    ;% rtP.RTP_063F80D9_TFIXED_Value
                    section.data(317).logicalSrcIdx = 399;
                    section.data(317).dtTransOffset = 348;

                    ;% rtP.RTP_36C82CBF_IL_Value
                    section.data(318).logicalSrcIdx = 400;
                    section.data(318).dtTransOffset = 349;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 24;
            section.data(24)  = dumData; %prealloc

                    ;% rtP.alpha2_Gain
                    section.data(1).logicalSrcIdx = 401;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.alpha_Gain
                    section.data(2).logicalSrcIdx = 402;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.alpha2_Gain_edh0qhxj4e
                    section.data(3).logicalSrcIdx = 403;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.alpha_Gain_pkcgaplt3m
                    section.data(4).logicalSrcIdx = 404;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.alpha_Gain_h144fvpml1
                    section.data(5).logicalSrcIdx = 405;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.alpha2_Gain_k54l5bjcyn
                    section.data(6).logicalSrcIdx = 406;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.alpha_Gain_ns5srwfp4a
                    section.data(7).logicalSrcIdx = 407;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.alpha2_Gain_b2lryd4erl
                    section.data(8).logicalSrcIdx = 408;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.alpha2_Gain_jmjocn5324
                    section.data(9).logicalSrcIdx = 409;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.alpha_Gain_chzz2ghjpt
                    section.data(10).logicalSrcIdx = 410;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.alpha2_Gain_jdfqf2swbm
                    section.data(11).logicalSrcIdx = 411;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.alpha_Gain_mt0yc41pmx
                    section.data(12).logicalSrcIdx = 412;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.alpha_Gain_ebrttocmwz
                    section.data(13).logicalSrcIdx = 413;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.alpha2_Gain_g1epyvb0j5
                    section.data(14).logicalSrcIdx = 414;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.alpha_Gain_c32fofybnv
                    section.data(15).logicalSrcIdx = 415;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.alpha2_Gain_c0nmmexjjw
                    section.data(16).logicalSrcIdx = 416;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.alpha2_Gain_bq3xno50jm
                    section.data(17).logicalSrcIdx = 417;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.alpha_Gain_issco5gf04
                    section.data(18).logicalSrcIdx = 418;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.alpha2_Gain_ohox2bw0ii
                    section.data(19).logicalSrcIdx = 419;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.alpha_Gain_ha1iji2obr
                    section.data(20).logicalSrcIdx = 420;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.alpha_Gain_actgxmy442
                    section.data(21).logicalSrcIdx = 421;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.alpha2_Gain_hs15jr0fze
                    section.data(22).logicalSrcIdx = 422;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.alpha_Gain_opakny3shk
                    section.data(23).logicalSrcIdx = 423;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.alpha2_Gain_nqoigr12un
                    section.data(24).logicalSrcIdx = 424;
                    section.data(24).dtTransOffset = 23;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtP.Output_InitialCondition
                    section.data(1).logicalSrcIdx = 425;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Output_InitialCondition_cpt4tpfquj
                    section.data(2).logicalSrcIdx = 426;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Output_InitialCondition_oso55jd5j2
                    section.data(3).logicalSrcIdx = 427;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.FixPtConstant_Value
                    section.data(4).logicalSrcIdx = 428;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Constant_Value
                    section.data(5).logicalSrcIdx = 429;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.FixPtConstant_Value_jcpw3o5bej
                    section.data(6).logicalSrcIdx = 430;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant_Value_apa5exl3vj
                    section.data(7).logicalSrcIdx = 431;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.FixPtConstant_Value_im2rjh0wrl
                    section.data(8).logicalSrcIdx = 432;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Constant_Value_kjlx00mux0
                    section.data(9).logicalSrcIdx = 433;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.nqcvx2wzlm.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 434;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.nqcvx2wzlm.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 435;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.gl43fmrisv.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 436;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.gl43fmrisv.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 437;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.hujlteqo2z.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 438;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.hujlteqo2z.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 439;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
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
        nTotSects     = 11;
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
            section.nData     = 209;
            section.data(209)  = dumData; %prealloc

                    ;% rtB.mtj0qfc1hb
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.nrfpufphvr
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ni0rdfpaiz
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.idiep0ndrb
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtB.ikm2snr5zf
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 10;

                    ;% rtB.pffnxrfxjy
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 16;

                    ;% rtB.nz5jti2wr1
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 20;

                    ;% rtB.o5rnvo024s
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 24;

                    ;% rtB.m0vl3iooy4
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 28;

                    ;% rtB.dyttx33jl4
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 32;

                    ;% rtB.a1kee0bbhh
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 36;

                    ;% rtB.enr4er5ugn
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 40;

                    ;% rtB.a4enoxc25n
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 41;

                    ;% rtB.byvjh01bgg
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 45;

                    ;% rtB.pb2fck224w
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 46;

                    ;% rtB.pur1ybnggo
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 50;

                    ;% rtB.dnpeo0mlyy
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 56;

                    ;% rtB.fcn2r552dv
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 60;

                    ;% rtB.nmpnlfxsny
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 64;

                    ;% rtB.eehr2alozi
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 68;

                    ;% rtB.gcijdhs3n1
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 72;

                    ;% rtB.eqnxhwykea
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 76;

                    ;% rtB.jyztzvd3j4
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 80;

                    ;% rtB.cqqbzqbgzr
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 81;

                    ;% rtB.hvlyozxkyc
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 85;

                    ;% rtB.nhs5fzmxh5
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 86;

                    ;% rtB.d1ly5is24i
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 90;

                    ;% rtB.e1d05x53fh
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 96;

                    ;% rtB.dwijbl3bjl
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 100;

                    ;% rtB.lhsyoiahgf
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 104;

                    ;% rtB.hd5eic2203
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 108;

                    ;% rtB.emo3v2vqak
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 112;

                    ;% rtB.jripa5e0sa
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 116;

                    ;% rtB.m42y0uk53c
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 120;

                    ;% rtB.lanjejqga3
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 121;

                    ;% rtB.nouam0g3oa
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 125;

                    ;% rtB.ntbljiq5zn
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 126;

                    ;% rtB.mkbvufs0fh
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 130;

                    ;% rtB.nzubz5zcaw
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 131;

                    ;% rtB.dveoezpzol
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 364;

                    ;% rtB.o44efxocq0
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 388;

                    ;% rtB.jnilobsjko
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 389;

                    ;% rtB.fil4mrutwj
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 390;

                    ;% rtB.kcl20ozfx5
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 391;

                    ;% rtB.m3egez1rs1
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 392;

                    ;% rtB.endb33fl2h
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 393;

                    ;% rtB.hzuydp0342
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 394;

                    ;% rtB.jbpuex4112
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 395;

                    ;% rtB.d2z5yi1abu
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 396;

                    ;% rtB.mjn22shqqe
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 397;

                    ;% rtB.hqskxvv54t
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 398;

                    ;% rtB.ffey2m0ah2
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 399;

                    ;% rtB.polsp5zirz
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 400;

                    ;% rtB.ndti0gtzl3
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 401;

                    ;% rtB.pzqtzfecyw
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 402;

                    ;% rtB.na4tyjngmd
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 404;

                    ;% rtB.fymik4ehbr
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 406;

                    ;% rtB.ffj153gzwx
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 408;

                    ;% rtB.c51pwmznvw
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 410;

                    ;% rtB.femzflyely
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 412;

                    ;% rtB.jyj4ef53mr
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 414;

                    ;% rtB.ex0hed1yyl
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 416;

                    ;% rtB.bxl5szpbbj
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 418;

                    ;% rtB.aobve4fqdo
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 420;

                    ;% rtB.ah4awuzbmi
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 422;

                    ;% rtB.gcqrargtap
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 424;

                    ;% rtB.nelhatsdgn
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 426;

                    ;% rtB.ivyaisc3iw
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 428;

                    ;% rtB.fx0in4qczm
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 430;

                    ;% rtB.b0zpex3nd3
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 432;

                    ;% rtB.dsgoyg1upn
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 434;

                    ;% rtB.kh5quoykke
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 436;

                    ;% rtB.azdyb5jzw2
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 438;

                    ;% rtB.pfeoax4yjp
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 439;

                    ;% rtB.ckmflb5ptc
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 440;

                    ;% rtB.kh1chxh5dg
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 441;

                    ;% rtB.ejiwuxoqfh
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 442;

                    ;% rtB.bz420ozoal
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 443;

                    ;% rtB.fzvssdup2a
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 444;

                    ;% rtB.nim1vqistm
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 445;

                    ;% rtB.hzqxukdt2n
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 446;

                    ;% rtB.k2pix3y1pq
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 449;

                    ;% rtB.gee5ztsvvw
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 450;

                    ;% rtB.bmjrp4i5l2
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 451;

                    ;% rtB.ly0sxsegct
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 452;

                    ;% rtB.hf5edtag1w
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 458;

                    ;% rtB.pdsagbfkyi
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 459;

                    ;% rtB.b3oezmaicg
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 460;

                    ;% rtB.cxextfpyro
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 461;

                    ;% rtB.c4nvx3ktei
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 462;

                    ;% rtB.egc5x2s3e1
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 463;

                    ;% rtB.ltzix1lvi4
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 464;

                    ;% rtB.k3lhsxpimt
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 465;

                    ;% rtB.fddkxm4bda
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 466;

                    ;% rtB.m3enyhsvoz
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 467;

                    ;% rtB.ofnzty1w1l
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 468;

                    ;% rtB.jewqbqieti
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 469;

                    ;% rtB.hh3dwrdcoy
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 470;

                    ;% rtB.pqgdmyojvr
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 471;

                    ;% rtB.dhxxrbtiya
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 472;

                    ;% rtB.lkgxgrmcdf
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 473;

                    ;% rtB.ab1tfr0xfv
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 474;

                    ;% rtB.klcm0ofnb2
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 476;

                    ;% rtB.mktfwuvyz0
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 478;

                    ;% rtB.hrf2kbz0fz
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 480;

                    ;% rtB.ncijorklu2
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 482;

                    ;% rtB.csz1erxzbp
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 484;

                    ;% rtB.nohypq1rb4
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 486;

                    ;% rtB.c53six4jge
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 488;

                    ;% rtB.krbnjfnjon
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 490;

                    ;% rtB.gvbz2kxljw
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 492;

                    ;% rtB.deuh5tyk4q
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 494;

                    ;% rtB.d0gifw0q3v
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 496;

                    ;% rtB.ahufcewv41
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 498;

                    ;% rtB.pg2dbtctik
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 500;

                    ;% rtB.evp4c5goee
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 502;

                    ;% rtB.jdgl5035pl
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 504;

                    ;% rtB.n0nnkknxzj
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 506;

                    ;% rtB.bf3cljzk3i
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 508;

                    ;% rtB.lutjprh4lt
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 510;

                    ;% rtB.o0id30im0j
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 511;

                    ;% rtB.hiku2rsz33
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 512;

                    ;% rtB.jqjid2ex0e
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 513;

                    ;% rtB.glxm44mkys
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 514;

                    ;% rtB.eodqn1cxgj
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 515;

                    ;% rtB.od3c3m5uvu
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 516;

                    ;% rtB.bo1uuaes1k
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 517;

                    ;% rtB.bsgqmzut0s
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 518;

                    ;% rtB.lrqp1tp2yx
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 519;

                    ;% rtB.l4aof44tt5
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 522;

                    ;% rtB.dzso2blz3j
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 523;

                    ;% rtB.fdzts3csz1
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 524;

                    ;% rtB.k5e1dud3cs
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 525;

                    ;% rtB.h53otsunu5
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 531;

                    ;% rtB.lyfxv21wwk
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 532;

                    ;% rtB.dsqazdztds
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 533;

                    ;% rtB.btpuxv0uzt
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 534;

                    ;% rtB.o141ir4zyh
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 535;

                    ;% rtB.aomtgiitoz
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 536;

                    ;% rtB.d4afppan4y
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 537;

                    ;% rtB.k5535mvj1k
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 538;

                    ;% rtB.eviafadpuh
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 539;

                    ;% rtB.fkjtkwtvva
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 540;

                    ;% rtB.ef1xi4ovuc
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 541;

                    ;% rtB.nlylzop1q2
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 542;

                    ;% rtB.hd5rddrr5u
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 543;

                    ;% rtB.elcj52y4t0
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 545;

                    ;% rtB.hse3ijehb0
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 547;

                    ;% rtB.a1rzesi2bb
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 549;

                    ;% rtB.ciqzi2p5w4
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 551;

                    ;% rtB.hnaf1zgwjr
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 553;

                    ;% rtB.mqwgwfpj3i
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 555;

                    ;% rtB.lq4z2u1de0
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 557;

                    ;% rtB.hz4yieuod3
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 559;

                    ;% rtB.pgdivb5hr1
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 561;

                    ;% rtB.hxovchz2ad
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 563;

                    ;% rtB.dcxbgqpknq
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 565;

                    ;% rtB.l2tjv2150h
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 567;

                    ;% rtB.mffmkhegd3
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 569;

                    ;% rtB.gedut3x5t2
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 571;

                    ;% rtB.np3lr2hb0f
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 573;

                    ;% rtB.bxvocjs4zz
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 575;

                    ;% rtB.acizx0bgzg
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 577;

                    ;% rtB.g432wnyoeo
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 579;

                    ;% rtB.hv4eksmc3i
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 580;

                    ;% rtB.ejdk0lg0qq
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 581;

                    ;% rtB.cuazvuvj1w
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 582;

                    ;% rtB.p5vna4dvqs
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 583;

                    ;% rtB.g3cz51wevi
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 584;

                    ;% rtB.kjzjhbpkms
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 585;

                    ;% rtB.flh3ijxd4r
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 586;

                    ;% rtB.pgw003xtvj
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 587;

                    ;% rtB.kebpz1ywnm
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 588;

                    ;% rtB.fwzuj13itn
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 591;

                    ;% rtB.calf4kp2sy
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 592;

                    ;% rtB.mhajepe3zk
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 593;

                    ;% rtB.dfhyh131oa
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 594;

                    ;% rtB.cy12o2ne10
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 600;

                    ;% rtB.jgebhiz4ey
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 601;

                    ;% rtB.n515mqmhn3
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 602;

                    ;% rtB.bigoycsnjx
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 603;

                    ;% rtB.mka2kjafzd
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 604;

                    ;% rtB.f0tw1xremj
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 605;

                    ;% rtB.pyjku12imh
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 606;

                    ;% rtB.hh4tq13ns3
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 607;

                    ;% rtB.jeo2sdv30b
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 608;

                    ;% rtB.lvs2nqocrc
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 609;

                    ;% rtB.gnm1oejpr1
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 610;

                    ;% rtB.anrciyr1bu
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 611;

                    ;% rtB.laggjrezxv
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 612;

                    ;% rtB.oekaepqjyv
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 613;

                    ;% rtB.lhdhpkyers
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 614;

                    ;% rtB.dmvf3ba4on
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 615;

                    ;% rtB.o12qoj43ak
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 616;

                    ;% rtB.dh441ngcar
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 617;

                    ;% rtB.bgymxpgltk
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 618;

                    ;% rtB.mwb14agqtc
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 619;

                    ;% rtB.iuy1503btr
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 620;

                    ;% rtB.moxna2fjso
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 621;

                    ;% rtB.cbw53muhke
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 622;

                    ;% rtB.dqyaxoax35
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 623;

                    ;% rtB.ooq523rnwd
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 624;

                    ;% rtB.a3jorwwe5p
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 625;

                    ;% rtB.m3hr453vl1
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 626;

                    ;% rtB.jo3jcfotck
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 627;

                    ;% rtB.hfcrw40dq2
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 631;

                    ;% rtB.hchs1kpa3j
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 635;

                    ;% rtB.nvfkwmhj20
                    section.data(208).logicalSrcIdx = 209;
                    section.data(208).dtTransOffset = 639;

                    ;% rtB.lwun3vmeu5
                    section.data(209).logicalSrcIdx = 210;
                    section.data(209).dtTransOffset = 640;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.dknyvaohjv
                    section.data(1).logicalSrcIdx = 211;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ois3ekjgke
                    section.data(2).logicalSrcIdx = 212;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.cve4a2pfpb
                    section.data(3).logicalSrcIdx = 213;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.nrde2fmcqk
                    section.data(1).logicalSrcIdx = 216;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hj4zhmy0lq
                    section.data(2).logicalSrcIdx = 219;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.pp0ca1v1nz
                    section.data(3).logicalSrcIdx = 222;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.m2srtq3ymc.nzv1mzceyf
                    section.data(1).logicalSrcIdx = 226;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.nqcvx2wzlm.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 227;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.nqcvx2wzlm.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 228;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.nqcvx2wzlm.gjl0s33nyr
                    section.data(3).logicalSrcIdx = 229;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtB.ktzkuabt2u.a2xxjwxwkq
                    section.data(1).logicalSrcIdx = 230;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ktzkuabt2u.iybtbh2qxq
                    section.data(2).logicalSrcIdx = 231;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ktzkuabt2u.nacb4b1xou
                    section.data(3).logicalSrcIdx = 232;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ktzkuabt2u.lnfcgypq4p
                    section.data(4).logicalSrcIdx = 233;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.dnwyq4zwad.nzv1mzceyf
                    section.data(1).logicalSrcIdx = 234;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.gl43fmrisv.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 235;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gl43fmrisv.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 236;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.gl43fmrisv.gjl0s33nyr
                    section.data(3).logicalSrcIdx = 237;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.jyzjgf4veo.nzv1mzceyf
                    section.data(1).logicalSrcIdx = 238;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.hujlteqo2z.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 239;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hujlteqo2z.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 240;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.hujlteqo2z.gjl0s33nyr
                    section.data(3).logicalSrcIdx = 241;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(10) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtB.hfglnexkeq.a2xxjwxwkq
                    section.data(1).logicalSrcIdx = 242;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hfglnexkeq.iybtbh2qxq
                    section.data(2).logicalSrcIdx = 243;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.hfglnexkeq.nacb4b1xou
                    section.data(3).logicalSrcIdx = 244;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.hfglnexkeq.lnfcgypq4p
                    section.data(4).logicalSrcIdx = 245;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(11) = section;
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
        nTotSects     = 27;
        sectIdxOffset = 11;

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
            section.nData     = 153;
            section.data(153)  = dumData; %prealloc

                    ;% rtDW.l10sjzgjvn
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mhluyzwmws
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.gmmxfl1bw3
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.fy40hggdnw
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtDW.l0soz05bit
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% rtDW.cocxu03fcu
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtDW.o0nnrlfudc
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% rtDW.e0ef4p5vuf
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtDW.nlq1hmcfry
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 20;

                    ;% rtDW.pkqxz2ee2e
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtDW.gh2dgbroxj
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 23;

                    ;% rtDW.p22f5daims
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 25;

                    ;% rtDW.cs5il4k0w2
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 27;

                    ;% rtDW.a0h4rw2pzq
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 33;

                    ;% rtDW.fxpbq0232m
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 35;

                    ;% rtDW.hy3x2mcczq
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 37;

                    ;% rtDW.pfwdm5fmqu
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 39;

                    ;% rtDW.bbd0kx4b5f
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 41;

                    ;% rtDW.bbsdtpdyeu
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 43;

                    ;% rtDW.o0pnnssinp
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 45;

                    ;% rtDW.gaxse5kxim
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 46;

                    ;% rtDW.frs1xovyzt
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 48;

                    ;% rtDW.c3iuhuus2k
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 50;

                    ;% rtDW.et4s534kkm
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 56;

                    ;% rtDW.mg5lmkzaqw
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 58;

                    ;% rtDW.ptuz1wboei
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 60;

                    ;% rtDW.omzhgagfms
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 62;

                    ;% rtDW.ahrnq0r2qe
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 64;

                    ;% rtDW.fleil3vprp
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 66;

                    ;% rtDW.krw3oy4q3p
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 68;

                    ;% rtDW.mu4ixewcyv
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 69;

                    ;% rtDW.ghqsaeko4d
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 71;

                    ;% rtDW.he1ppeigal
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 73;

                    ;% rtDW.prhiof4qsq
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 226;

                    ;% rtDW.ecsqxwncwm
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 227;

                    ;% rtDW.nim5l5b0xd
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 228;

                    ;% rtDW.aybtzdp53j
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 229;

                    ;% rtDW.casefabrfq
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 230;

                    ;% rtDW.cnmjwkmazr
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 231;

                    ;% rtDW.brlwrgk15q
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 233;

                    ;% rtDW.o25uswlvdp
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 235;

                    ;% rtDW.medeidy042
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 237;

                    ;% rtDW.cu4avl1hkj
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 6903;

                    ;% rtDW.bsq0dfmaxa
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 6905;

                    ;% rtDW.cezbwb0d2a
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 6907;

                    ;% rtDW.ox4tevucxv
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 6909;

                    ;% rtDW.g31vxfpy4q
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 13575;

                    ;% rtDW.db5bwiekun
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 13577;

                    ;% rtDW.ls4rxzkes5
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 13579;

                    ;% rtDW.bdgovhv4ik
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 13581;

                    ;% rtDW.eiw52ywrb4
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 20247;

                    ;% rtDW.hpqftlxp3c
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 20249;

                    ;% rtDW.dk0rvfsmaq
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 20251;

                    ;% rtDW.kc40jaqb2h
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 20253;

                    ;% rtDW.a1sr2wqgmu
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 26919;

                    ;% rtDW.g4ja2dajvk
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 26921;

                    ;% rtDW.luujgxmr1o
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 26923;

                    ;% rtDW.e3gek0ry3d
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 26925;

                    ;% rtDW.nvwrcwhvfh
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 33591;

                    ;% rtDW.f0gipvq3m1
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 33593;

                    ;% rtDW.kwtkfmor5n
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 33595;

                    ;% rtDW.j1x1hsbdr0
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 33597;

                    ;% rtDW.n5nzu3kjes
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 40263;

                    ;% rtDW.cpdftgvp5j
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 40264;

                    ;% rtDW.aytq4ro10u
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 40265;

                    ;% rtDW.hon4sukebl
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 40266;

                    ;% rtDW.buoynvge5k
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 40269;

                    ;% rtDW.ibybqspfgl
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 40270;

                    ;% rtDW.jsd0tjjonc
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 40271;

                    ;% rtDW.lqb3ywvxey
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 40272;

                    ;% rtDW.ho4bknelcg
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 40273;

                    ;% rtDW.itoao1sfit
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 40274;

                    ;% rtDW.c4lxq5nxdk
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 40276;

                    ;% rtDW.i31qdzmytg
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 40278;

                    ;% rtDW.ijyhgxa4ir
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 40280;

                    ;% rtDW.ikmihxdjgd
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 46946;

                    ;% rtDW.beyirrck3l
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 46948;

                    ;% rtDW.opjnplgrqr
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 46950;

                    ;% rtDW.bzfzyz3bd1
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 46952;

                    ;% rtDW.fhoxjffvpi
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 53618;

                    ;% rtDW.kibzgbc1sz
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 53620;

                    ;% rtDW.cylq3fvmgt
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 53622;

                    ;% rtDW.ezchfr4o4l
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 53624;

                    ;% rtDW.brhp0ikhtk
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 60290;

                    ;% rtDW.cx4aeyf40y
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 60292;

                    ;% rtDW.fndyh2xhdu
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 60294;

                    ;% rtDW.eftulqbrzz
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 60296;

                    ;% rtDW.m0cw303eqj
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 66962;

                    ;% rtDW.hlb4yuxrtw
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 66964;

                    ;% rtDW.plzxjtiyrv
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 66966;

                    ;% rtDW.jookwiu0tz
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 66968;

                    ;% rtDW.gwf111r5cb
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 73634;

                    ;% rtDW.ga5s5ik0xv
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 73636;

                    ;% rtDW.jqooyst0rm
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 73638;

                    ;% rtDW.d3ckza5q5a
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 73640;

                    ;% rtDW.a51ghepnze
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 80306;

                    ;% rtDW.hqs2mw0ghn
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 80307;

                    ;% rtDW.eh404m514p
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 80308;

                    ;% rtDW.dhijvgbrcb
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 80309;

                    ;% rtDW.jteq4u1rgc
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 80312;

                    ;% rtDW.ngvnwfql33
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 80313;

                    ;% rtDW.cavmdykbp4
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 80314;

                    ;% rtDW.hclglektli
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 80315;

                    ;% rtDW.hukujkin1x
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 80317;

                    ;% rtDW.plfkd220se
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 80319;

                    ;% rtDW.g2wv5vwcok
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 80321;

                    ;% rtDW.nqbqpp1zsn
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 86987;

                    ;% rtDW.juzilaxmfa
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 86989;

                    ;% rtDW.o4tg2meql1
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 86991;

                    ;% rtDW.p0vfhjcdkv
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 86993;

                    ;% rtDW.fxegfycqrk
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 93659;

                    ;% rtDW.jljxue20p1
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 93661;

                    ;% rtDW.ghdvbscwvz
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 93663;

                    ;% rtDW.pw1ws1yipp
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 93665;

                    ;% rtDW.iglwtbg1np
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 100331;

                    ;% rtDW.osxcei0sox
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 100333;

                    ;% rtDW.agzhd311mp
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 100335;

                    ;% rtDW.dn32o1afer
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 100337;

                    ;% rtDW.o1z5aw2q1b
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 107003;

                    ;% rtDW.mrerbltrdv
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 107005;

                    ;% rtDW.g00rwtyuxg
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 107007;

                    ;% rtDW.hnuzofy0tb
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 107009;

                    ;% rtDW.j5xqsliozr
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 113675;

                    ;% rtDW.jprfaxtqvk
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 113677;

                    ;% rtDW.itj5fexbg3
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 113679;

                    ;% rtDW.iup1pr3yje
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 113681;

                    ;% rtDW.ggubul1ojd
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 120347;

                    ;% rtDW.ekwhbiziyd
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 120348;

                    ;% rtDW.j45hyw5det
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 120349;

                    ;% rtDW.h5lxdgscuf
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 120350;

                    ;% rtDW.hwcao5iaj4
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 120351;

                    ;% rtDW.j21fohvjwd
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 120352;

                    ;% rtDW.e1h3pdnle0
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 120355;

                    ;% rtDW.fahmpvykdf
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 120356;

                    ;% rtDW.fhiibidmhv
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 120357;

                    ;% rtDW.hohmgcvl5b
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 120358;

                    ;% rtDW.gxsljldjrz
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 120359;

                    ;% rtDW.owd0yknmcd
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 120360;

                    ;% rtDW.aztl5dgba1
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 120361;

                    ;% rtDW.elswac3jyk
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 120362;

                    ;% rtDW.iml3sujeru
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 120363;

                    ;% rtDW.k5zonezswp
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 120364;

                    ;% rtDW.avrp3pl50n
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 120365;

                    ;% rtDW.pnmi4zgqup
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 120366;

                    ;% rtDW.nhad53qhlh
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 120367;

                    ;% rtDW.bmdokcjl2s
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 120370;

                    ;% rtDW.pbwsociu5m
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 120373;

                    ;% rtDW.hpygl3vduj
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 120376;

                    ;% rtDW.e1yo12tosu
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 120377;

                    ;% rtDW.ptavdiqfuy
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 120378;

                    ;% rtDW.exod2jkl51
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 120379;

                    ;% rtDW.n5l5iwkjcj
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 120380;

                    ;% rtDW.mmkcovjj43
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 120381;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 46;
            section.data(46)  = dumData; %prealloc

                    ;% rtDW.pdwd2qqxba
                    section.data(1).logicalSrcIdx = 153;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.d3svesmau2
                    section.data(2).logicalSrcIdx = 154;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ctpmr0qy2w
                    section.data(3).logicalSrcIdx = 155;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gn4tdbf40k
                    section.data(4).logicalSrcIdx = 156;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jnvtrrqjab
                    section.data(5).logicalSrcIdx = 157;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ihbnz3xv44
                    section.data(6).logicalSrcIdx = 158;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dewjhbtsof
                    section.data(7).logicalSrcIdx = 159;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.czyrktcsyd
                    section.data(8).logicalSrcIdx = 160;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.fyx05x0zdv
                    section.data(9).logicalSrcIdx = 161;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eyk03rsw5y
                    section.data(10).logicalSrcIdx = 162;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.bvobfiadqb
                    section.data(11).logicalSrcIdx = 163;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.jr4kkfwx0e
                    section.data(12).logicalSrcIdx = 164;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.k12qk4zsfm
                    section.data(13).logicalSrcIdx = 165;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.aw3nmy5ew5.LoggedData
                    section.data(14).logicalSrcIdx = 166;
                    section.data(14).dtTransOffset = 15;

                    ;% rtDW.cnspotbbsa.TimePtr
                    section.data(15).logicalSrcIdx = 167;
                    section.data(15).dtTransOffset = 17;

                    ;% rtDW.ckxcz3qb0c.TimePtr
                    section.data(16).logicalSrcIdx = 168;
                    section.data(16).dtTransOffset = 18;

                    ;% rtDW.bjxv1rvheo
                    section.data(17).logicalSrcIdx = 169;
                    section.data(17).dtTransOffset = 19;

                    ;% rtDW.buyuofckyi
                    section.data(18).logicalSrcIdx = 170;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.nkgor1datg.TimePtr
                    section.data(19).logicalSrcIdx = 171;
                    section.data(19).dtTransOffset = 23;

                    ;% rtDW.al5kuxfjwn.LoggedData
                    section.data(20).logicalSrcIdx = 172;
                    section.data(20).dtTransOffset = 24;

                    ;% rtDW.hxvgeow341.LoggedData
                    section.data(21).logicalSrcIdx = 173;
                    section.data(21).dtTransOffset = 25;

                    ;% rtDW.pwtoor2sjt.TimePtr
                    section.data(22).logicalSrcIdx = 174;
                    section.data(22).dtTransOffset = 27;

                    ;% rtDW.oehb2fyu4q
                    section.data(23).logicalSrcIdx = 175;
                    section.data(23).dtTransOffset = 28;

                    ;% rtDW.hl0whdlvih
                    section.data(24).logicalSrcIdx = 176;
                    section.data(24).dtTransOffset = 30;

                    ;% rtDW.h1rydrdfyi.LoggedData
                    section.data(25).logicalSrcIdx = 177;
                    section.data(25).dtTransOffset = 32;

                    ;% rtDW.fci0zvaqnz.TimePtr
                    section.data(26).logicalSrcIdx = 178;
                    section.data(26).dtTransOffset = 34;

                    ;% rtDW.n5wcfptujm.TimePtr
                    section.data(27).logicalSrcIdx = 179;
                    section.data(27).dtTransOffset = 35;

                    ;% rtDW.bsgf2ryqdu.LoggedData
                    section.data(28).logicalSrcIdx = 180;
                    section.data(28).dtTransOffset = 36;

                    ;% rtDW.k03x2e2zwo.AQHandles
                    section.data(29).logicalSrcIdx = 181;
                    section.data(29).dtTransOffset = 40;

                    ;% rtDW.b1iol10x4w.AQHandles
                    section.data(30).logicalSrcIdx = 182;
                    section.data(30).dtTransOffset = 41;

                    ;% rtDW.pru2b1vufe.AQHandles
                    section.data(31).logicalSrcIdx = 183;
                    section.data(31).dtTransOffset = 42;

                    ;% rtDW.iiuqq1u2xy.AQHandles
                    section.data(32).logicalSrcIdx = 184;
                    section.data(32).dtTransOffset = 43;

                    ;% rtDW.ajopsahum1.LoggedData
                    section.data(33).logicalSrcIdx = 185;
                    section.data(33).dtTransOffset = 44;

                    ;% rtDW.elrlc2i1p2.AQHandles
                    section.data(34).logicalSrcIdx = 186;
                    section.data(34).dtTransOffset = 46;

                    ;% rtDW.ht2kgpwizw.AQHandles
                    section.data(35).logicalSrcIdx = 187;
                    section.data(35).dtTransOffset = 47;

                    ;% rtDW.bsvedga4ar.LoggedData
                    section.data(36).logicalSrcIdx = 188;
                    section.data(36).dtTransOffset = 48;

                    ;% rtDW.g2zj3hehp4.AQHandles
                    section.data(37).logicalSrcIdx = 189;
                    section.data(37).dtTransOffset = 51;

                    ;% rtDW.c4ulfwrxhx.AQHandles
                    section.data(38).logicalSrcIdx = 190;
                    section.data(38).dtTransOffset = 52;

                    ;% rtDW.i3zk5hga54.AQHandles
                    section.data(39).logicalSrcIdx = 191;
                    section.data(39).dtTransOffset = 53;

                    ;% rtDW.ja2dj0f0ul.AQHandles
                    section.data(40).logicalSrcIdx = 192;
                    section.data(40).dtTransOffset = 54;

                    ;% rtDW.jq1p4omjox.AQHandles
                    section.data(41).logicalSrcIdx = 193;
                    section.data(41).dtTransOffset = 55;

                    ;% rtDW.po2vncqjoh.AQHandles
                    section.data(42).logicalSrcIdx = 194;
                    section.data(42).dtTransOffset = 56;

                    ;% rtDW.gkz0y4hq2m.LoggedData
                    section.data(43).logicalSrcIdx = 195;
                    section.data(43).dtTransOffset = 57;

                    ;% rtDW.hb0mah0exy.AQHandles
                    section.data(44).logicalSrcIdx = 196;
                    section.data(44).dtTransOffset = 60;

                    ;% rtDW.gvx2zg2cea.AQHandles
                    section.data(45).logicalSrcIdx = 197;
                    section.data(45).dtTransOffset = 61;

                    ;% rtDW.gww0cv0ikt.LoggedData
                    section.data(46).logicalSrcIdx = 198;
                    section.data(46).dtTransOffset = 62;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.nkjbdq4ryd
                    section.data(1).logicalSrcIdx = 199;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.evl1v4iore
                    section.data(2).logicalSrcIdx = 200;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.neujqpawn3
                    section.data(3).logicalSrcIdx = 201;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.lykadcxjo0
                    section.data(1).logicalSrcIdx = 202;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtDW.g0ey1umlvp
                    section.data(1).logicalSrcIdx = 203;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.aoolzur04j
                    section.data(2).logicalSrcIdx = 204;
                    section.data(2).dtTransOffset = 80;

                    ;% rtDW.fdcsxjj0tt
                    section.data(3).logicalSrcIdx = 205;
                    section.data(3).dtTransOffset = 81;

                    ;% rtDW.ka1dja1it3
                    section.data(4).logicalSrcIdx = 206;
                    section.data(4).dtTransOffset = 86;

                    ;% rtDW.bgeyshjbzb.PrevIndex
                    section.data(5).logicalSrcIdx = 207;
                    section.data(5).dtTransOffset = 91;

                    ;% rtDW.mjve5455le.PrevIndex
                    section.data(6).logicalSrcIdx = 208;
                    section.data(6).dtTransOffset = 92;

                    ;% rtDW.ey2v3oako3
                    section.data(7).logicalSrcIdx = 209;
                    section.data(7).dtTransOffset = 93;

                    ;% rtDW.hvxmf3zuqp
                    section.data(8).logicalSrcIdx = 210;
                    section.data(8).dtTransOffset = 98;

                    ;% rtDW.k1540yevzf.PrevIndex
                    section.data(9).logicalSrcIdx = 211;
                    section.data(9).dtTransOffset = 103;

                    ;% rtDW.blyhnqcwbl.PrevIndex
                    section.data(10).logicalSrcIdx = 212;
                    section.data(10).dtTransOffset = 104;

                    ;% rtDW.jhw4zh1udf
                    section.data(11).logicalSrcIdx = 213;
                    section.data(11).dtTransOffset = 105;

                    ;% rtDW.e3sjjnukzn
                    section.data(12).logicalSrcIdx = 214;
                    section.data(12).dtTransOffset = 110;

                    ;% rtDW.iawjkczuo4.PrevIndex
                    section.data(13).logicalSrcIdx = 215;
                    section.data(13).dtTransOffset = 115;

                    ;% rtDW.ifyhgjywal.PrevIndex
                    section.data(14).logicalSrcIdx = 216;
                    section.data(14).dtTransOffset = 116;

                    ;% rtDW.cplapuxul1
                    section.data(15).logicalSrcIdx = 217;
                    section.data(15).dtTransOffset = 117;

                    ;% rtDW.etyndqvhof
                    section.data(16).logicalSrcIdx = 218;
                    section.data(16).dtTransOffset = 118;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtDW.ivsks1bx0l
                    section.data(1).logicalSrcIdx = 219;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kqwgkvrpbx
                    section.data(2).logicalSrcIdx = 220;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mrclia2nhj
                    section.data(3).logicalSrcIdx = 221;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.mkfm1nwa4k
                    section.data(4).logicalSrcIdx = 222;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.cij5fmj2hg
                    section.data(5).logicalSrcIdx = 223;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mn2mnft3ng
                    section.data(6).logicalSrcIdx = 224;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dfhxi1pprk
                    section.data(7).logicalSrcIdx = 225;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.goxydkgp3m
                    section.data(8).logicalSrcIdx = 226;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.kntzdj5mni
                    section.data(9).logicalSrcIdx = 227;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 40;
            section.data(40)  = dumData; %prealloc

                    ;% rtDW.pesmq01kos
                    section.data(1).logicalSrcIdx = 228;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ad2rr00kcq
                    section.data(2).logicalSrcIdx = 229;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mfooylrov2
                    section.data(3).logicalSrcIdx = 230;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.a0ow33ilzk
                    section.data(4).logicalSrcIdx = 231;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bkwrvqxkf1
                    section.data(5).logicalSrcIdx = 232;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.j50udee3q4
                    section.data(6).logicalSrcIdx = 233;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.irp0xx4avl
                    section.data(7).logicalSrcIdx = 234;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.p5powm1gdp
                    section.data(8).logicalSrcIdx = 235;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.puogz2oxpb
                    section.data(9).logicalSrcIdx = 236;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.h4yemslxzv
                    section.data(10).logicalSrcIdx = 237;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ib045naqql
                    section.data(11).logicalSrcIdx = 238;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.htly4042cc
                    section.data(12).logicalSrcIdx = 239;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.lmniz4owhh
                    section.data(13).logicalSrcIdx = 240;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hwjumjs5x1
                    section.data(14).logicalSrcIdx = 241;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.e4kyxoj0nc
                    section.data(15).logicalSrcIdx = 242;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.nihpeweagh
                    section.data(16).logicalSrcIdx = 243;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.moyclcqaxp
                    section.data(17).logicalSrcIdx = 244;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.baseatbrhl
                    section.data(18).logicalSrcIdx = 245;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.o5sglifuzn
                    section.data(19).logicalSrcIdx = 246;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.iphlqctr2v
                    section.data(20).logicalSrcIdx = 247;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.pwkdcusirn
                    section.data(21).logicalSrcIdx = 248;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.dzmkslhpoi
                    section.data(22).logicalSrcIdx = 249;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.lc0mv3azov
                    section.data(23).logicalSrcIdx = 250;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.j4reyhjks0
                    section.data(24).logicalSrcIdx = 251;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.mxcgazvi0e
                    section.data(25).logicalSrcIdx = 252;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.iwne4nroqk
                    section.data(26).logicalSrcIdx = 253;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.juff0j4zxc
                    section.data(27).logicalSrcIdx = 254;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.hdnm0in5gu
                    section.data(28).logicalSrcIdx = 255;
                    section.data(28).dtTransOffset = 27;

                    ;% rtDW.dq3ydxncnl
                    section.data(29).logicalSrcIdx = 256;
                    section.data(29).dtTransOffset = 28;

                    ;% rtDW.n5o0dosdfd
                    section.data(30).logicalSrcIdx = 257;
                    section.data(30).dtTransOffset = 29;

                    ;% rtDW.mhwhtdoeeo
                    section.data(31).logicalSrcIdx = 258;
                    section.data(31).dtTransOffset = 30;

                    ;% rtDW.jzbz0do1t2
                    section.data(32).logicalSrcIdx = 259;
                    section.data(32).dtTransOffset = 31;

                    ;% rtDW.hkqsxogxsv
                    section.data(33).logicalSrcIdx = 260;
                    section.data(33).dtTransOffset = 32;

                    ;% rtDW.ny4j3f2jqc
                    section.data(34).logicalSrcIdx = 261;
                    section.data(34).dtTransOffset = 33;

                    ;% rtDW.j1fz4mivlx
                    section.data(35).logicalSrcIdx = 262;
                    section.data(35).dtTransOffset = 34;

                    ;% rtDW.phglrzh1l4
                    section.data(36).logicalSrcIdx = 263;
                    section.data(36).dtTransOffset = 35;

                    ;% rtDW.kxcovd0tfj
                    section.data(37).logicalSrcIdx = 264;
                    section.data(37).dtTransOffset = 36;

                    ;% rtDW.ckl1zxdnwx
                    section.data(38).logicalSrcIdx = 265;
                    section.data(38).dtTransOffset = 37;

                    ;% rtDW.lhb2uqmgc4
                    section.data(39).logicalSrcIdx = 266;
                    section.data(39).dtTransOffset = 38;

                    ;% rtDW.ntmeetxak4
                    section.data(40).logicalSrcIdx = 267;
                    section.data(40).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtDW.hd1wmr0d1r
                    section.data(1).logicalSrcIdx = 268;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jdpempr5r1
                    section.data(2).logicalSrcIdx = 269;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.csrr5dodrz
                    section.data(3).logicalSrcIdx = 270;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jdkwfeajym
                    section.data(4).logicalSrcIdx = 271;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ibt15oxvor
                    section.data(5).logicalSrcIdx = 272;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.cwc1wqm0vk
                    section.data(6).logicalSrcIdx = 273;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.mbinizmvii
                    section.data(7).logicalSrcIdx = 274;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.lwuyrwvpiz
                    section.data(8).logicalSrcIdx = 275;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.p0iycn1rso
                    section.data(9).logicalSrcIdx = 276;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.icwxcihpxn
                    section.data(10).logicalSrcIdx = 277;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.bvufpywmkk
                    section.data(11).logicalSrcIdx = 278;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.kpiua3g0ly
                    section.data(12).logicalSrcIdx = 279;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.muorklbp1c
                    section.data(13).logicalSrcIdx = 280;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.m13d2twz41
                    section.data(14).logicalSrcIdx = 281;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.mfw0vedbyv
                    section.data(15).logicalSrcIdx = 282;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.hqef4lwy1a
                    section.data(16).logicalSrcIdx = 283;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.m2srtq3ymc.oteitslqed
                    section.data(1).logicalSrcIdx = 284;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.m2srtq3ymc.obdkwzjvon
                    section.data(2).logicalSrcIdx = 285;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.m2srtq3ymc.inbbj4gnlk
                    section.data(3).logicalSrcIdx = 286;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.m2srtq3ymc.fkmxcopvbb
                    section.data(1).logicalSrcIdx = 287;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.m2srtq3ymc.edvffhhy01
                    section.data(1).logicalSrcIdx = 288;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.m2srtq3ymc.jnzzpi2k4b
                    section.data(2).logicalSrcIdx = 289;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.m2srtq3ymc.lsalgyw3rj
                    section.data(3).logicalSrcIdx = 290;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.m2srtq3ymc.da3zvkqrxn
                    section.data(4).logicalSrcIdx = 291;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nqcvx2wzlm.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 292;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nqcvx2wzlm.ovi3mu0twa
                    section.data(1).logicalSrcIdx = 293;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ktzkuabt2u.kksigz1kjz
                    section.data(1).logicalSrcIdx = 294;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ktzkuabt2u.ck2irrfdg1
                    section.data(1).logicalSrcIdx = 295;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.dnwyq4zwad.oteitslqed
                    section.data(1).logicalSrcIdx = 296;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dnwyq4zwad.obdkwzjvon
                    section.data(2).logicalSrcIdx = 297;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dnwyq4zwad.inbbj4gnlk
                    section.data(3).logicalSrcIdx = 298;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dnwyq4zwad.fkmxcopvbb
                    section.data(1).logicalSrcIdx = 299;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.dnwyq4zwad.edvffhhy01
                    section.data(1).logicalSrcIdx = 300;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dnwyq4zwad.jnzzpi2k4b
                    section.data(2).logicalSrcIdx = 301;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dnwyq4zwad.lsalgyw3rj
                    section.data(3).logicalSrcIdx = 302;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dnwyq4zwad.da3zvkqrxn
                    section.data(4).logicalSrcIdx = 303;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gl43fmrisv.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 304;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gl43fmrisv.ovi3mu0twa
                    section.data(1).logicalSrcIdx = 305;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.jyzjgf4veo.oteitslqed
                    section.data(1).logicalSrcIdx = 306;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jyzjgf4veo.obdkwzjvon
                    section.data(2).logicalSrcIdx = 307;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jyzjgf4veo.inbbj4gnlk
                    section.data(3).logicalSrcIdx = 308;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jyzjgf4veo.fkmxcopvbb
                    section.data(1).logicalSrcIdx = 309;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.jyzjgf4veo.edvffhhy01
                    section.data(1).logicalSrcIdx = 310;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jyzjgf4veo.jnzzpi2k4b
                    section.data(2).logicalSrcIdx = 311;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jyzjgf4veo.lsalgyw3rj
                    section.data(3).logicalSrcIdx = 312;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jyzjgf4veo.da3zvkqrxn
                    section.data(4).logicalSrcIdx = 313;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hujlteqo2z.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 314;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hujlteqo2z.ovi3mu0twa
                    section.data(1).logicalSrcIdx = 315;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hfglnexkeq.kksigz1kjz
                    section.data(1).logicalSrcIdx = 316;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hfglnexkeq.ck2irrfdg1
                    section.data(1).logicalSrcIdx = 317;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(27) = section;
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


    targMap.checksum0 = 740160556;
    targMap.checksum1 = 2945103438;
    targMap.checksum2 = 2688028172;
    targMap.checksum3 = 2787084421;

