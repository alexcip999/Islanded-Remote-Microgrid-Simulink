    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
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
            section.nData     = 58;
            section.data(58)  = dumData; %prealloc

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

                    ;% rtP.PowerMeasurementThreePhase_K
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.PowerMeasurementThreePhase_K_hy3xpce12q
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_oyh5wkhpw5
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Ki_LF_bot0muxzza
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Ki_LF
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_ndbawt3bd0
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Kp_LF
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Kp_LF_evcqlc0f5m
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.VdDiscretePIController_LowerSaturationLimit_kzdnvpoxxj
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.VqDiscretePIController_LowerSaturationLimit_l3t03oryem
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.irradiance_OutValues
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.irradiance_OutValues_gy1zpozhsg
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 56;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 80;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_b1r3iy3lau
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 81;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase1_Theta0
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 82;

                    ;% rtP.SinusoidalMeasurementPLLThreePhase_Theta0_oksq2l2odz
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 83;

                    ;% rtP.irradiance_TimeValues
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 84;

                    ;% rtP.irradiance_TimeValues_h1agehmocs
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 108;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 132;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 133;

                    ;% rtP.VdDiscretePIController_UpperSaturationLimit_clg5ygz5v5
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 134;

                    ;% rtP.VqDiscretePIController_UpperSaturationLimit_bclvwasnsn
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 135;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 136;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_gca2pndy5y
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 137;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kxsgugcvmz
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 138;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_k5nbqzap3x
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 139;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_l0mfddutlu
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 140;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_erg5yu5yxu
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 141;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 142;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_kpwvhjlgaq
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 143;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_c5wjg5w2lg
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 144;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_cl5dytyjkn
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 145;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_aj0bheagem
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 146;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateUpperValue_k3s5fw1q11
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 147;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 148;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_h1m1w5hlay
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 149;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.LimitedCounter_uplimit
                    section.data(1).logicalSrcIdx = 58;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.LimitedCounter_uplimit_gcdf4egkla
                    section.data(2).logicalSrcIdx = 59;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 216;
            section.data(216)  = dumData; %prealloc

                    ;% rtP.Gain1_Gain
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Gain1_Gain_ollxa44d1e
                    section.data(2).logicalSrcIdx = 61;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Gain2_Gain
                    section.data(3).logicalSrcIdx = 62;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain1_Gain_b2wmxmysa4
                    section.data(4).logicalSrcIdx = 63;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Gain1_Gain_cvrz05eflz
                    section.data(5).logicalSrcIdx = 64;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Gain1_Gain_msdjc3sds3
                    section.data(6).logicalSrcIdx = 65;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Gain1_Gain_bct5xv0x0d
                    section.data(7).logicalSrcIdx = 66;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Gain1_Gain_fdb215vbov
                    section.data(8).logicalSrcIdx = 67;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Gain3_Gain
                    section.data(9).logicalSrcIdx = 68;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Gain1_Gain_hzadu4huns
                    section.data(10).logicalSrcIdx = 69;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Gain1_Gain_caxz35q2gc
                    section.data(11).logicalSrcIdx = 70;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Gain2_Gain_fkhwdbr2xf
                    section.data(12).logicalSrcIdx = 71;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Gain1_Gain_kzsdhtloji
                    section.data(13).logicalSrcIdx = 72;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.Gain1_Gain_im4ln3hgws
                    section.data(14).logicalSrcIdx = 73;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Gain1_Gain_ig1ss2ojir
                    section.data(15).logicalSrcIdx = 74;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.Gain1_Gain_ons3rxrahf
                    section.data(16).logicalSrcIdx = 75;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Gain1_Gain_pxruile2ng
                    section.data(17).logicalSrcIdx = 76;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Gain3_Gain_ku2mah5vw0
                    section.data(18).logicalSrcIdx = 77;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Connectat2s_Time
                    section.data(19).logicalSrcIdx = 78;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Connectat2s_Y0
                    section.data(20).logicalSrcIdx = 79;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Connectat2s_YFinal
                    section.data(21).logicalSrcIdx = 80;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Connectat4s_Time
                    section.data(22).logicalSrcIdx = 81;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Connectat4s_Y0
                    section.data(23).logicalSrcIdx = 82;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Connectat4s_YFinal
                    section.data(24).logicalSrcIdx = 83;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(25).logicalSrcIdx = 84;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.UnitDelay1_InitialCondition_lapzeesnb2
                    section.data(26).logicalSrcIdx = 85;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(27).logicalSrcIdx = 86;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.SampleTimeMath_WtEt
                    section.data(28).logicalSrcIdx = 87;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.UnitDelay_InitialCondition_inzqlzdpmy
                    section.data(29).logicalSrcIdx = 88;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.SampleTimeMath_WtEt_duutwjczyo
                    section.data(30).logicalSrcIdx = 89;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.Integrator_gainval
                    section.data(31).logicalSrcIdx = 90;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.Gain1_Gain_losnrngiyc
                    section.data(32).logicalSrcIdx = 91;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.Constant1_Value
                    section.data(33).logicalSrcIdx = 92;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.Integrator_gainval_carz0grxbg
                    section.data(34).logicalSrcIdx = 93;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.Integrator_UpperSat
                    section.data(35).logicalSrcIdx = 94;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Integrator_LowerSat
                    section.data(36).logicalSrcIdx = 95;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.Saturation_UpperSat
                    section.data(37).logicalSrcIdx = 96;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.Saturation_LowerSat
                    section.data(38).logicalSrcIdx = 97;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Gain1_Gain_dzyyjzode5
                    section.data(39).logicalSrcIdx = 98;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.TransportDelay_Delay
                    section.data(40).logicalSrcIdx = 99;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.TransportDelay_InitOutput
                    section.data(41).logicalSrcIdx = 100;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.TransportDelay1_Delay
                    section.data(42).logicalSrcIdx = 101;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.TransportDelay1_InitOutput
                    section.data(43).logicalSrcIdx = 102;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(44).logicalSrcIdx = 103;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(45).logicalSrcIdx = 104;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(46).logicalSrcIdx = 105;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(47).logicalSrcIdx = 106;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.Gain_Gain
                    section.data(48).logicalSrcIdx = 107;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.fromWS_Signal1_Time0
                    section.data(49).logicalSrcIdx = 108;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.fromWS_Signal1_Data0
                    section.data(50).logicalSrcIdx = 109;
                    section.data(50).dtTransOffset = 52;

                    ;% rtP.Integrator_gainval_avayg33ayj
                    section.data(51).logicalSrcIdx = 110;
                    section.data(51).dtTransOffset = 56;

                    ;% rtP.Integrator_gainval_bh1byogw3o
                    section.data(52).logicalSrcIdx = 111;
                    section.data(52).dtTransOffset = 57;

                    ;% rtP.Integrator_IC
                    section.data(53).logicalSrcIdx = 112;
                    section.data(53).dtTransOffset = 58;

                    ;% rtP.UnitDelay1_InitialCondition_igxde5r1oa
                    section.data(54).logicalSrcIdx = 113;
                    section.data(54).dtTransOffset = 59;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(55).logicalSrcIdx = 114;
                    section.data(55).dtTransOffset = 60;

                    ;% rtP.Delay_InitialCondition
                    section.data(56).logicalSrcIdx = 115;
                    section.data(56).dtTransOffset = 61;

                    ;% rtP.Gain_Gain_a0tugaykcq
                    section.data(57).logicalSrcIdx = 116;
                    section.data(57).dtTransOffset = 62;

                    ;% rtP.Integrator_gainval_g1hx0pgpel
                    section.data(58).logicalSrcIdx = 117;
                    section.data(58).dtTransOffset = 63;

                    ;% rtP.Integrator_IC_g4xqnrlohi
                    section.data(59).logicalSrcIdx = 118;
                    section.data(59).dtTransOffset = 64;

                    ;% rtP.UnitDelay1_InitialCondition_mkjhh3hej3
                    section.data(60).logicalSrcIdx = 119;
                    section.data(60).dtTransOffset = 65;

                    ;% rtP.UnitDelay2_InitialCondition_ky4da5qoff
                    section.data(61).logicalSrcIdx = 120;
                    section.data(61).dtTransOffset = 66;

                    ;% rtP.Delay_InitialCondition_pxsgay3n2d
                    section.data(62).logicalSrcIdx = 121;
                    section.data(62).dtTransOffset = 67;

                    ;% rtP.Gain_Gain_msl2mctrek
                    section.data(63).logicalSrcIdx = 122;
                    section.data(63).dtTransOffset = 68;

                    ;% rtP.Integrator_gainval_g2bxhp4r3m
                    section.data(64).logicalSrcIdx = 123;
                    section.data(64).dtTransOffset = 69;

                    ;% rtP.Integrator_IC_ol30bkacbk
                    section.data(65).logicalSrcIdx = 124;
                    section.data(65).dtTransOffset = 70;

                    ;% rtP.UnitDelay1_InitialCondition_mwdjagajvk
                    section.data(66).logicalSrcIdx = 125;
                    section.data(66).dtTransOffset = 71;

                    ;% rtP.UnitDelay2_InitialCondition_oacume4w23
                    section.data(67).logicalSrcIdx = 126;
                    section.data(67).dtTransOffset = 72;

                    ;% rtP.Delay_InitialCondition_jdzlvwaqw3
                    section.data(68).logicalSrcIdx = 127;
                    section.data(68).dtTransOffset = 73;

                    ;% rtP.Gain_Gain_ka0ohvwpd2
                    section.data(69).logicalSrcIdx = 128;
                    section.data(69).dtTransOffset = 74;

                    ;% rtP.Integrator_gainval_nec3pprea3
                    section.data(70).logicalSrcIdx = 129;
                    section.data(70).dtTransOffset = 75;

                    ;% rtP.Integrator_IC_fe5bpfeox5
                    section.data(71).logicalSrcIdx = 130;
                    section.data(71).dtTransOffset = 76;

                    ;% rtP.UnitDelay1_InitialCondition_jazgyvwy0b
                    section.data(72).logicalSrcIdx = 131;
                    section.data(72).dtTransOffset = 77;

                    ;% rtP.UnitDelay2_InitialCondition_c335id2yur
                    section.data(73).logicalSrcIdx = 132;
                    section.data(73).dtTransOffset = 78;

                    ;% rtP.Delay_InitialCondition_kvqzfvuqvw
                    section.data(74).logicalSrcIdx = 133;
                    section.data(74).dtTransOffset = 79;

                    ;% rtP.Gain_Gain_n2i2fdezd0
                    section.data(75).logicalSrcIdx = 134;
                    section.data(75).dtTransOffset = 80;

                    ;% rtP.Integrator_gainval_iydjvvm3uf
                    section.data(76).logicalSrcIdx = 135;
                    section.data(76).dtTransOffset = 81;

                    ;% rtP.Integrator_IC_klk0nn5nsf
                    section.data(77).logicalSrcIdx = 136;
                    section.data(77).dtTransOffset = 82;

                    ;% rtP.UnitDelay1_InitialCondition_lqiknbltiv
                    section.data(78).logicalSrcIdx = 137;
                    section.data(78).dtTransOffset = 83;

                    ;% rtP.UnitDelay2_InitialCondition_lq1eghcbab
                    section.data(79).logicalSrcIdx = 138;
                    section.data(79).dtTransOffset = 84;

                    ;% rtP.Delay_InitialCondition_eo1i4emrrh
                    section.data(80).logicalSrcIdx = 139;
                    section.data(80).dtTransOffset = 85;

                    ;% rtP.Gain_Gain_ewisuu03rb
                    section.data(81).logicalSrcIdx = 140;
                    section.data(81).dtTransOffset = 86;

                    ;% rtP.Integrator_gainval_h1oputbahl
                    section.data(82).logicalSrcIdx = 141;
                    section.data(82).dtTransOffset = 87;

                    ;% rtP.Integrator_IC_edmj50xozy
                    section.data(83).logicalSrcIdx = 142;
                    section.data(83).dtTransOffset = 88;

                    ;% rtP.UnitDelay1_InitialCondition_ls5nawmwll
                    section.data(84).logicalSrcIdx = 143;
                    section.data(84).dtTransOffset = 89;

                    ;% rtP.UnitDelay2_InitialCondition_p5x2r4bsum
                    section.data(85).logicalSrcIdx = 144;
                    section.data(85).dtTransOffset = 90;

                    ;% rtP.Delay_InitialCondition_jdx3lhztnl
                    section.data(86).logicalSrcIdx = 145;
                    section.data(86).dtTransOffset = 91;

                    ;% rtP.Gain_Gain_n13h0tbo3s
                    section.data(87).logicalSrcIdx = 146;
                    section.data(87).dtTransOffset = 92;

                    ;% rtP.Gain_Gain_ij5ephcub4
                    section.data(88).logicalSrcIdx = 147;
                    section.data(88).dtTransOffset = 93;

                    ;% rtP.Integrator_IC_i2u0y3f22e
                    section.data(89).logicalSrcIdx = 148;
                    section.data(89).dtTransOffset = 94;

                    ;% rtP.FromWorkspace_Time0
                    section.data(90).logicalSrcIdx = 149;
                    section.data(90).dtTransOffset = 95;

                    ;% rtP.FromWorkspace_Data0
                    section.data(91).logicalSrcIdx = 150;
                    section.data(91).dtTransOffset = 97;

                    ;% rtP.Gain1_Gain_mocebkriwh
                    section.data(92).logicalSrcIdx = 151;
                    section.data(92).dtTransOffset = 99;

                    ;% rtP.Integrator_gainval_gjezqe5f5f
                    section.data(93).logicalSrcIdx = 152;
                    section.data(93).dtTransOffset = 100;

                    ;% rtP.Integrator_gainval_prwo1fbvrt
                    section.data(94).logicalSrcIdx = 153;
                    section.data(94).dtTransOffset = 101;

                    ;% rtP.Gain1_Gain_cwovvihjzo
                    section.data(95).logicalSrcIdx = 154;
                    section.data(95).dtTransOffset = 102;

                    ;% rtP.Initial_Value
                    section.data(96).logicalSrcIdx = 155;
                    section.data(96).dtTransOffset = 103;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_cxzqbmd0qn
                    section.data(97).logicalSrcIdx = 156;
                    section.data(97).dtTransOffset = 104;

                    ;% rtP.avoiddivisionby0_UpperSat
                    section.data(98).logicalSrcIdx = 157;
                    section.data(98).dtTransOffset = 105;

                    ;% rtP.avoiddivisionby0_LowerSat
                    section.data(99).logicalSrcIdx = 158;
                    section.data(99).dtTransOffset = 106;

                    ;% rtP.UnitDelay2_InitialCondition_p5dmi4fyvs
                    section.data(100).logicalSrcIdx = 159;
                    section.data(100).dtTransOffset = 107;

                    ;% rtP.Integrator_gainval_aiqo4pqknj
                    section.data(101).logicalSrcIdx = 160;
                    section.data(101).dtTransOffset = 108;

                    ;% rtP.Gain1_Gain_abh3hvbccc
                    section.data(102).logicalSrcIdx = 161;
                    section.data(102).dtTransOffset = 109;

                    ;% rtP.Constant1_Value_lsknndl14i
                    section.data(103).logicalSrcIdx = 162;
                    section.data(103).dtTransOffset = 110;

                    ;% rtP.Integrator_gainval_j4gmb2gwsc
                    section.data(104).logicalSrcIdx = 163;
                    section.data(104).dtTransOffset = 111;

                    ;% rtP.Integrator_UpperSat_lm3ewrrsxh
                    section.data(105).logicalSrcIdx = 164;
                    section.data(105).dtTransOffset = 112;

                    ;% rtP.Integrator_LowerSat_hjh2vovvsr
                    section.data(106).logicalSrcIdx = 165;
                    section.data(106).dtTransOffset = 113;

                    ;% rtP.Saturation_UpperSat_gox4btb11r
                    section.data(107).logicalSrcIdx = 166;
                    section.data(107).dtTransOffset = 114;

                    ;% rtP.Saturation_LowerSat_axo2ygf3i0
                    section.data(108).logicalSrcIdx = 167;
                    section.data(108).dtTransOffset = 115;

                    ;% rtP.Gain1_Gain_e2meerxskp
                    section.data(109).logicalSrcIdx = 168;
                    section.data(109).dtTransOffset = 116;

                    ;% rtP.TransportDelay_Delay_ag53vhwsyv
                    section.data(110).logicalSrcIdx = 169;
                    section.data(110).dtTransOffset = 117;

                    ;% rtP.TransportDelay_InitOutput_hyaxfclhky
                    section.data(111).logicalSrcIdx = 170;
                    section.data(111).dtTransOffset = 118;

                    ;% rtP.TransportDelay1_Delay_fmvsbqj5tj
                    section.data(112).logicalSrcIdx = 171;
                    section.data(112).dtTransOffset = 119;

                    ;% rtP.TransportDelay1_InitOutput_pmbwserd04
                    section.data(113).logicalSrcIdx = 172;
                    section.data(113).dtTransOffset = 120;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_bfxxjmpabm
                    section.data(114).logicalSrcIdx = 173;
                    section.data(114).dtTransOffset = 121;

                    ;% rtP.DiscreteTimeIntegrator1_IC_akx0cgm0yv
                    section.data(115).logicalSrcIdx = 174;
                    section.data(115).dtTransOffset = 122;

                    ;% rtP.DiscreteTimeIntegrator_gainval_lrim5qbkf2
                    section.data(116).logicalSrcIdx = 175;
                    section.data(116).dtTransOffset = 123;

                    ;% rtP.DiscreteTimeIntegrator_IC_nxtwlpx203
                    section.data(117).logicalSrcIdx = 176;
                    section.data(117).dtTransOffset = 124;

                    ;% rtP.Gain_Gain_ogxlrpbcid
                    section.data(118).logicalSrcIdx = 177;
                    section.data(118).dtTransOffset = 125;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(119).logicalSrcIdx = 178;
                    section.data(119).dtTransOffset = 126;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(120).logicalSrcIdx = 179;
                    section.data(120).dtTransOffset = 130;

                    ;% rtP.Integrator_gainval_nbtau22bcs
                    section.data(121).logicalSrcIdx = 180;
                    section.data(121).dtTransOffset = 134;

                    ;% rtP.Integrator_gainval_lx3n3x4rqc
                    section.data(122).logicalSrcIdx = 181;
                    section.data(122).dtTransOffset = 135;

                    ;% rtP.Integrator_IC_cooq3xxsvj
                    section.data(123).logicalSrcIdx = 182;
                    section.data(123).dtTransOffset = 136;

                    ;% rtP.UnitDelay1_InitialCondition_j5udodixng
                    section.data(124).logicalSrcIdx = 183;
                    section.data(124).dtTransOffset = 137;

                    ;% rtP.UnitDelay2_InitialCondition_lxsa4gacjt
                    section.data(125).logicalSrcIdx = 184;
                    section.data(125).dtTransOffset = 138;

                    ;% rtP.Delay_InitialCondition_a55iiq0o4f
                    section.data(126).logicalSrcIdx = 185;
                    section.data(126).dtTransOffset = 139;

                    ;% rtP.Gain_Gain_g1bxa5yagb
                    section.data(127).logicalSrcIdx = 186;
                    section.data(127).dtTransOffset = 140;

                    ;% rtP.Integrator_gainval_j3zllfw2ya
                    section.data(128).logicalSrcIdx = 187;
                    section.data(128).dtTransOffset = 141;

                    ;% rtP.Integrator_IC_o1gepkaxe2
                    section.data(129).logicalSrcIdx = 188;
                    section.data(129).dtTransOffset = 142;

                    ;% rtP.UnitDelay1_InitialCondition_jfuykwtijp
                    section.data(130).logicalSrcIdx = 189;
                    section.data(130).dtTransOffset = 143;

                    ;% rtP.UnitDelay2_InitialCondition_lratdejrvc
                    section.data(131).logicalSrcIdx = 190;
                    section.data(131).dtTransOffset = 144;

                    ;% rtP.Delay_InitialCondition_iyzd5f3bo1
                    section.data(132).logicalSrcIdx = 191;
                    section.data(132).dtTransOffset = 145;

                    ;% rtP.Gain_Gain_lhnhdifs0e
                    section.data(133).logicalSrcIdx = 192;
                    section.data(133).dtTransOffset = 146;

                    ;% rtP.Integrator_gainval_n4mbdo45bw
                    section.data(134).logicalSrcIdx = 193;
                    section.data(134).dtTransOffset = 147;

                    ;% rtP.Integrator_IC_evhka53zqk
                    section.data(135).logicalSrcIdx = 194;
                    section.data(135).dtTransOffset = 148;

                    ;% rtP.UnitDelay1_InitialCondition_izykpui1wt
                    section.data(136).logicalSrcIdx = 195;
                    section.data(136).dtTransOffset = 149;

                    ;% rtP.UnitDelay2_InitialCondition_ec3b0v2ked
                    section.data(137).logicalSrcIdx = 196;
                    section.data(137).dtTransOffset = 150;

                    ;% rtP.Delay_InitialCondition_bavhdtocgy
                    section.data(138).logicalSrcIdx = 197;
                    section.data(138).dtTransOffset = 151;

                    ;% rtP.Gain_Gain_o4zcph2u4p
                    section.data(139).logicalSrcIdx = 198;
                    section.data(139).dtTransOffset = 152;

                    ;% rtP.Integrator_gainval_paeznd5jot
                    section.data(140).logicalSrcIdx = 199;
                    section.data(140).dtTransOffset = 153;

                    ;% rtP.Integrator_IC_ngdqv10nj2
                    section.data(141).logicalSrcIdx = 200;
                    section.data(141).dtTransOffset = 154;

                    ;% rtP.UnitDelay1_InitialCondition_bosg34hruf
                    section.data(142).logicalSrcIdx = 201;
                    section.data(142).dtTransOffset = 155;

                    ;% rtP.UnitDelay2_InitialCondition_iqiy2ig2a2
                    section.data(143).logicalSrcIdx = 202;
                    section.data(143).dtTransOffset = 156;

                    ;% rtP.Delay_InitialCondition_lcu1ixidx5
                    section.data(144).logicalSrcIdx = 203;
                    section.data(144).dtTransOffset = 157;

                    ;% rtP.Gain_Gain_knn0armyna
                    section.data(145).logicalSrcIdx = 204;
                    section.data(145).dtTransOffset = 158;

                    ;% rtP.Integrator_gainval_cewndrxcpd
                    section.data(146).logicalSrcIdx = 205;
                    section.data(146).dtTransOffset = 159;

                    ;% rtP.Integrator_IC_bwgl5a0wob
                    section.data(147).logicalSrcIdx = 206;
                    section.data(147).dtTransOffset = 160;

                    ;% rtP.UnitDelay1_InitialCondition_nggtcjmvxt
                    section.data(148).logicalSrcIdx = 207;
                    section.data(148).dtTransOffset = 161;

                    ;% rtP.UnitDelay2_InitialCondition_ofqprotkgb
                    section.data(149).logicalSrcIdx = 208;
                    section.data(149).dtTransOffset = 162;

                    ;% rtP.Delay_InitialCondition_hqkwrz2i2i
                    section.data(150).logicalSrcIdx = 209;
                    section.data(150).dtTransOffset = 163;

                    ;% rtP.Gain_Gain_in5c1sqasm
                    section.data(151).logicalSrcIdx = 210;
                    section.data(151).dtTransOffset = 164;

                    ;% rtP.Integrator_gainval_ksirpb4yxq
                    section.data(152).logicalSrcIdx = 211;
                    section.data(152).dtTransOffset = 165;

                    ;% rtP.Integrator_IC_fpbmwehjlf
                    section.data(153).logicalSrcIdx = 212;
                    section.data(153).dtTransOffset = 166;

                    ;% rtP.UnitDelay1_InitialCondition_eyrhkzaysm
                    section.data(154).logicalSrcIdx = 213;
                    section.data(154).dtTransOffset = 167;

                    ;% rtP.UnitDelay2_InitialCondition_eqc4tfjodc
                    section.data(155).logicalSrcIdx = 214;
                    section.data(155).dtTransOffset = 168;

                    ;% rtP.Delay_InitialCondition_gukmfnnmw2
                    section.data(156).logicalSrcIdx = 215;
                    section.data(156).dtTransOffset = 169;

                    ;% rtP.Gain_Gain_dgbqv335s1
                    section.data(157).logicalSrcIdx = 216;
                    section.data(157).dtTransOffset = 170;

                    ;% rtP.Gain_Gain_pcqi2zh5ks
                    section.data(158).logicalSrcIdx = 217;
                    section.data(158).dtTransOffset = 171;

                    ;% rtP.Integrator_IC_dkgbnnaxcx
                    section.data(159).logicalSrcIdx = 218;
                    section.data(159).dtTransOffset = 172;

                    ;% rtP.FromWorkspace2_Time0
                    section.data(160).logicalSrcIdx = 219;
                    section.data(160).dtTransOffset = 173;

                    ;% rtP.FromWorkspace2_Data0
                    section.data(161).logicalSrcIdx = 220;
                    section.data(161).dtTransOffset = 175;

                    ;% rtP.Gain1_Gain_algp55cnlc
                    section.data(162).logicalSrcIdx = 221;
                    section.data(162).dtTransOffset = 177;

                    ;% rtP.Integrator_gainval_f0rqsj0fnp
                    section.data(163).logicalSrcIdx = 222;
                    section.data(163).dtTransOffset = 178;

                    ;% rtP.Integrator_gainval_kexeikjgzm
                    section.data(164).logicalSrcIdx = 223;
                    section.data(164).dtTransOffset = 179;

                    ;% rtP.Gain1_Gain_kbqppqxrgb
                    section.data(165).logicalSrcIdx = 224;
                    section.data(165).dtTransOffset = 180;

                    ;% rtP.Initial_Value_j4wczc1lxq
                    section.data(166).logicalSrcIdx = 225;
                    section.data(166).dtTransOffset = 181;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_arqevlqjww
                    section.data(167).logicalSrcIdx = 226;
                    section.data(167).dtTransOffset = 182;

                    ;% rtP.avoiddivisionby0_UpperSat_nx01wqrouz
                    section.data(168).logicalSrcIdx = 227;
                    section.data(168).dtTransOffset = 183;

                    ;% rtP.avoiddivisionby0_LowerSat_avgk30jeg3
                    section.data(169).logicalSrcIdx = 228;
                    section.data(169).dtTransOffset = 184;

                    ;% rtP.UnitDelay2_InitialCondition_pvc43f4wjv
                    section.data(170).logicalSrcIdx = 229;
                    section.data(170).dtTransOffset = 185;

                    ;% rtP.Gain_Gain_edy3rsxlbj
                    section.data(171).logicalSrcIdx = 230;
                    section.data(171).dtTransOffset = 186;

                    ;% rtP.Gain_Gain_liiiiertx5
                    section.data(172).logicalSrcIdx = 231;
                    section.data(172).dtTransOffset = 187;

                    ;% rtP.Integrator_gainval_jiozqx4w4v
                    section.data(173).logicalSrcIdx = 232;
                    section.data(173).dtTransOffset = 188;

                    ;% rtP.Gain1_Gain_b4avjwyrj2
                    section.data(174).logicalSrcIdx = 233;
                    section.data(174).dtTransOffset = 189;

                    ;% rtP.Constant1_Value_da1dwznx44
                    section.data(175).logicalSrcIdx = 234;
                    section.data(175).dtTransOffset = 190;

                    ;% rtP.Integrator_gainval_coazxg22nt
                    section.data(176).logicalSrcIdx = 235;
                    section.data(176).dtTransOffset = 191;

                    ;% rtP.Integrator_UpperSat_hpvvxjqfd4
                    section.data(177).logicalSrcIdx = 236;
                    section.data(177).dtTransOffset = 192;

                    ;% rtP.Integrator_LowerSat_i10qscebp4
                    section.data(178).logicalSrcIdx = 237;
                    section.data(178).dtTransOffset = 193;

                    ;% rtP.Saturation_UpperSat_i15q0blda2
                    section.data(179).logicalSrcIdx = 238;
                    section.data(179).dtTransOffset = 194;

                    ;% rtP.Saturation_LowerSat_jx0zzxgaew
                    section.data(180).logicalSrcIdx = 239;
                    section.data(180).dtTransOffset = 195;

                    ;% rtP.Gain1_Gain_gi0auafmvm
                    section.data(181).logicalSrcIdx = 240;
                    section.data(181).dtTransOffset = 196;

                    ;% rtP.Integrator_gainval_o23ns0zq3s
                    section.data(182).logicalSrcIdx = 241;
                    section.data(182).dtTransOffset = 197;

                    ;% rtP.Gain1_Gain_b02alh1u5u
                    section.data(183).logicalSrcIdx = 242;
                    section.data(183).dtTransOffset = 198;

                    ;% rtP.Constant1_Value_ktx3gyatq5
                    section.data(184).logicalSrcIdx = 243;
                    section.data(184).dtTransOffset = 199;

                    ;% rtP.Integrator_gainval_axkjs1f2yw
                    section.data(185).logicalSrcIdx = 244;
                    section.data(185).dtTransOffset = 200;

                    ;% rtP.Integrator_UpperSat_nxtktwi3hv
                    section.data(186).logicalSrcIdx = 245;
                    section.data(186).dtTransOffset = 201;

                    ;% rtP.Integrator_LowerSat_micq5t2bis
                    section.data(187).logicalSrcIdx = 246;
                    section.data(187).dtTransOffset = 202;

                    ;% rtP.Saturation_UpperSat_kp53gt01p2
                    section.data(188).logicalSrcIdx = 247;
                    section.data(188).dtTransOffset = 203;

                    ;% rtP.Saturation_LowerSat_p4o1xc0k2h
                    section.data(189).logicalSrcIdx = 248;
                    section.data(189).dtTransOffset = 204;

                    ;% rtP.Gain1_Gain_kgot1sgoty
                    section.data(190).logicalSrcIdx = 249;
                    section.data(190).dtTransOffset = 205;

                    ;% rtP.Constant1_Value_lodywi0z2n
                    section.data(191).logicalSrcIdx = 250;
                    section.data(191).dtTransOffset = 206;

                    ;% rtP.Constant1_Value_ipdttkadk5
                    section.data(192).logicalSrcIdx = 251;
                    section.data(192).dtTransOffset = 207;

                    ;% rtP.Constant2_Value
                    section.data(193).logicalSrcIdx = 252;
                    section.data(193).dtTransOffset = 208;

                    ;% rtP.Constant3_Value
                    section.data(194).logicalSrcIdx = 253;
                    section.data(194).dtTransOffset = 209;

                    ;% rtP.Sequence_Value
                    section.data(195).logicalSrcIdx = 254;
                    section.data(195).dtTransOffset = 210;

                    ;% rtP.V0_Value
                    section.data(196).logicalSrcIdx = 255;
                    section.data(196).dtTransOffset = 211;

                    ;% rtP.Constant5_Value
                    section.data(197).logicalSrcIdx = 256;
                    section.data(197).dtTransOffset = 212;

                    ;% rtP.Constant1_Value_brrjsvceec
                    section.data(198).logicalSrcIdx = 257;
                    section.data(198).dtTransOffset = 213;

                    ;% rtP.Constant2_Value_lexwhwkcr1
                    section.data(199).logicalSrcIdx = 258;
                    section.data(199).dtTransOffset = 214;

                    ;% rtP.Constant3_Value_lyqvw4nurv
                    section.data(200).logicalSrcIdx = 259;
                    section.data(200).dtTransOffset = 215;

                    ;% rtP.Sequence_Value_phlzt4e1pz
                    section.data(201).logicalSrcIdx = 260;
                    section.data(201).dtTransOffset = 216;

                    ;% rtP.V0_Value_gfkw3a205u
                    section.data(202).logicalSrcIdx = 261;
                    section.data(202).dtTransOffset = 217;

                    ;% rtP.D_init_Value
                    section.data(203).logicalSrcIdx = 262;
                    section.data(203).dtTransOffset = 218;

                    ;% rtP.D_max_Value
                    section.data(204).logicalSrcIdx = 263;
                    section.data(204).dtTransOffset = 219;

                    ;% rtP.D_min_Value
                    section.data(205).logicalSrcIdx = 264;
                    section.data(205).dtTransOffset = 220;

                    ;% rtP.Delta_D_Value
                    section.data(206).logicalSrcIdx = 265;
                    section.data(206).dtTransOffset = 221;

                    ;% rtP.RTP_44647E90_TFIXED_Value
                    section.data(207).logicalSrcIdx = 266;
                    section.data(207).dtTransOffset = 222;

                    ;% rtP.D_init_Value_gzmutkxqpm
                    section.data(208).logicalSrcIdx = 267;
                    section.data(208).dtTransOffset = 223;

                    ;% rtP.D_max_Value_b3iaci24kf
                    section.data(209).logicalSrcIdx = 268;
                    section.data(209).dtTransOffset = 224;

                    ;% rtP.D_min_Value_jxuzma2pr2
                    section.data(210).logicalSrcIdx = 269;
                    section.data(210).dtTransOffset = 225;

                    ;% rtP.Delta_D_Value_nexecftfus
                    section.data(211).logicalSrcIdx = 270;
                    section.data(211).dtTransOffset = 226;

                    ;% rtP.RTP_DD0943EF_TFIXED_Value
                    section.data(212).logicalSrcIdx = 271;
                    section.data(212).dtTransOffset = 227;

                    ;% rtP.RTP_1D2E87C1_IL_Value
                    section.data(213).logicalSrcIdx = 272;
                    section.data(213).dtTransOffset = 228;

                    ;% rtP.RTP_6A29B757_IL_Value
                    section.data(214).logicalSrcIdx = 273;
                    section.data(214).dtTransOffset = 231;

                    ;% rtP.RTP_A18535C3_IL_Value
                    section.data(215).logicalSrcIdx = 274;
                    section.data(215).dtTransOffset = 234;

                    ;% rtP.RTP_D6820555_IL_Value
                    section.data(216).logicalSrcIdx = 275;
                    section.data(216).dtTransOffset = 237;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtP.alpha2_Gain
                    section.data(1).logicalSrcIdx = 276;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.alpha_Gain
                    section.data(2).logicalSrcIdx = 277;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.alpha2_Gain_edh0qhxj4e
                    section.data(3).logicalSrcIdx = 278;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.alpha_Gain_pkcgaplt3m
                    section.data(4).logicalSrcIdx = 279;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.alpha_Gain_h144fvpml1
                    section.data(5).logicalSrcIdx = 280;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.alpha2_Gain_k54l5bjcyn
                    section.data(6).logicalSrcIdx = 281;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.alpha_Gain_ns5srwfp4a
                    section.data(7).logicalSrcIdx = 282;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.alpha2_Gain_b2lryd4erl
                    section.data(8).logicalSrcIdx = 283;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.alpha2_Gain_jmjocn5324
                    section.data(9).logicalSrcIdx = 284;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.alpha_Gain_chzz2ghjpt
                    section.data(10).logicalSrcIdx = 285;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.alpha2_Gain_jdfqf2swbm
                    section.data(11).logicalSrcIdx = 286;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.alpha_Gain_mt0yc41pmx
                    section.data(12).logicalSrcIdx = 287;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.alpha_Gain_ebrttocmwz
                    section.data(13).logicalSrcIdx = 288;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.alpha2_Gain_g1epyvb0j5
                    section.data(14).logicalSrcIdx = 289;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.alpha_Gain_c32fofybnv
                    section.data(15).logicalSrcIdx = 290;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.alpha2_Gain_c0nmmexjjw
                    section.data(16).logicalSrcIdx = 291;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtP.Output_InitialCondition
                    section.data(1).logicalSrcIdx = 292;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Output_InitialCondition_i4kbzdl5hu
                    section.data(2).logicalSrcIdx = 293;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.FixPtConstant_Value
                    section.data(3).logicalSrcIdx = 294;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Constant_Value
                    section.data(4).logicalSrcIdx = 295;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.FixPtConstant_Value_kxw1vl0agc
                    section.data(5).logicalSrcIdx = 296;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant_Value_py20bfahtq
                    section.data(6).logicalSrcIdx = 297;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.ik3s1aw220.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 298;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ik3s1aw220.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 299;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.nc2tt33tmt.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 300;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.nc2tt33tmt.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 301;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
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
        nTotSects     = 7;
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
            section.nData     = 148;
            section.data(148)  = dumData; %prealloc

                    ;% rtB.a35lsrbjwz
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.d31goal2b1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.nwgm4yop4v
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.hk22eeeuip
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtB.jqp1ni5yle
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 10;

                    ;% rtB.fgczhapgu2
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 16;

                    ;% rtB.ockasa2aui
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 20;

                    ;% rtB.crbg4nmnpw
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 24;

                    ;% rtB.gqcsyp0bql
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 28;

                    ;% rtB.gnv3zyjwty
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 32;

                    ;% rtB.gpanw3q3gw
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 36;

                    ;% rtB.hbnilezh5i
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 40;

                    ;% rtB.ovorrl5csm
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 46;

                    ;% rtB.itjg5uruho
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 50;

                    ;% rtB.nq4whkyrdk
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 54;

                    ;% rtB.ebp3xxjbx4
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 58;

                    ;% rtB.aovyijozms
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 62;

                    ;% rtB.p5lcyfyj2u
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 66;

                    ;% rtB.pbxp1bjaxm
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 70;

                    ;% rtB.antnjchln0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 71;

                    ;% rtB.lig4rsx5z1
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 75;

                    ;% rtB.jd204gdp2w
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 76;

                    ;% rtB.l3n3mt4q3p
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 80;

                    ;% rtB.bq4c111bs3
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 81;

                    ;% rtB.d5egbbonay
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 85;

                    ;% rtB.esog4yyet3
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 86;

                    ;% rtB.hwm3viehw3
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 90;

                    ;% rtB.mxefsp1e4p
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 91;

                    ;% rtB.px4qgqmmgx
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 257;

                    ;% rtB.a14ofns5py
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 275;

                    ;% rtB.enfjevdaan
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 276;

                    ;% rtB.hplttyct24
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 277;

                    ;% rtB.p3zmhwsezq
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 278;

                    ;% rtB.pvbwgmuvqg
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 279;

                    ;% rtB.k2gklplyvt
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 280;

                    ;% rtB.jmlmihxon2
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 281;

                    ;% rtB.b1se15a1up
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 282;

                    ;% rtB.gkmok0yj2z
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 283;

                    ;% rtB.dgjp1fcvry
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 284;

                    ;% rtB.kjbirx5muq
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 285;

                    ;% rtB.cvg1dlbb2w
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 286;

                    ;% rtB.o2k4ww0on3
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 287;

                    ;% rtB.ippqnzyzwc
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 288;

                    ;% rtB.dmthjydnvv
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 289;

                    ;% rtB.psnxbm4k0a
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 291;

                    ;% rtB.elqirq5xyl
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 293;

                    ;% rtB.izp04t43gl
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 295;

                    ;% rtB.joc0iqtapq
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 297;

                    ;% rtB.muzjb1gqkt
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 299;

                    ;% rtB.glmwibrwbw
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 301;

                    ;% rtB.p5bztxdzdp
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 303;

                    ;% rtB.bjwot0jql3
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 305;

                    ;% rtB.hrw4ncsvlt
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 307;

                    ;% rtB.ajn0wrk2vx
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 309;

                    ;% rtB.adswrgixag
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 311;

                    ;% rtB.efuvldqb2g
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 313;

                    ;% rtB.fcfyvtz5km
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 315;

                    ;% rtB.idkuzo4nrv
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 317;

                    ;% rtB.kfgt0ce4v5
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 319;

                    ;% rtB.ge3egvjh10
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 321;

                    ;% rtB.gaqmpx1wrl
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 323;

                    ;% rtB.amlv3nuap0
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 325;

                    ;% rtB.ekcqtgnvui
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 326;

                    ;% rtB.ixzdgcfdct
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 327;

                    ;% rtB.cv2owmwlsq
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 328;

                    ;% rtB.en2zthw52w
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 329;

                    ;% rtB.pifewaekqa
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 330;

                    ;% rtB.iigqetnrbl
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 331;

                    ;% rtB.hvqmw4ymlk
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 332;

                    ;% rtB.exwjrhnim1
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 333;

                    ;% rtB.k0wy3c0kpb
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 336;

                    ;% rtB.g02co4jrjz
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 337;

                    ;% rtB.jmlv142pz5
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 338;

                    ;% rtB.ape4ewnngd
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 339;

                    ;% rtB.javpyv4dtn
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 345;

                    ;% rtB.jt4azuasq0
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 346;

                    ;% rtB.o1c4dn30yo
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 347;

                    ;% rtB.gyfes0q4ox
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 348;

                    ;% rtB.owoudggcou
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 349;

                    ;% rtB.k5cs3zawly
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 350;

                    ;% rtB.pobg24datj
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 351;

                    ;% rtB.ioq45u00sl
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 352;

                    ;% rtB.hjcyugfaj0
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 353;

                    ;% rtB.f20jewerm0
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 354;

                    ;% rtB.liwh542udk
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 355;

                    ;% rtB.nyvy2jo00i
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 356;

                    ;% rtB.a0qtimz0di
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 357;

                    ;% rtB.dnpiwx4f1d
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 358;

                    ;% rtB.g05nawatzc
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 359;

                    ;% rtB.atiwkc5qww
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 360;

                    ;% rtB.jq2dgj2xtx
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 361;

                    ;% rtB.lz0se4nacy
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 363;

                    ;% rtB.c5v3kbg15g
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 365;

                    ;% rtB.d0mkeqnxsv
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 367;

                    ;% rtB.cp2zjgfyhh
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 369;

                    ;% rtB.bkobrnh3q4
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 371;

                    ;% rtB.drf3kqkqa4
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 373;

                    ;% rtB.cupsh0z3ms
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 375;

                    ;% rtB.dxuoskutq2
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 377;

                    ;% rtB.o2klk5aqc5
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 379;

                    ;% rtB.p2do40uxe3
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 381;

                    ;% rtB.if04oyxoqy
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 383;

                    ;% rtB.ep5veai0jt
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 385;

                    ;% rtB.c2o1gkebxr
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 387;

                    ;% rtB.ivi2u05z2g
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 389;

                    ;% rtB.fjjiqrulwl
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 391;

                    ;% rtB.gjhfiq4jth
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 393;

                    ;% rtB.kot301zbsx
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 395;

                    ;% rtB.fk3pnwfcaj
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 397;

                    ;% rtB.b0mctnw0s0
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 398;

                    ;% rtB.pcyhly0aw3
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 399;

                    ;% rtB.ewxovokbhn
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 400;

                    ;% rtB.gwqwlnporj
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 401;

                    ;% rtB.msz32drood
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 402;

                    ;% rtB.mbkjtl01xc
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 403;

                    ;% rtB.bzlcsvbb1h
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 404;

                    ;% rtB.p1icmtn4ie
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 405;

                    ;% rtB.nlyl0aruwx
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 406;

                    ;% rtB.c2mjkhgt1y
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 409;

                    ;% rtB.jq0eihhe03
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 410;

                    ;% rtB.ag5pia043d
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 411;

                    ;% rtB.le11tvw0b0
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 412;

                    ;% rtB.imwfo4prqb
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 418;

                    ;% rtB.csdw0bmygr
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 419;

                    ;% rtB.mqqr4i1cna
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 420;

                    ;% rtB.ajmghzdkf5
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 421;

                    ;% rtB.guhvcib1aj
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 422;

                    ;% rtB.j5uackhf3v
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 423;

                    ;% rtB.dyizch2kh0
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 424;

                    ;% rtB.ix51qpa3dw
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 425;

                    ;% rtB.hr3vgvnvb2
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 427;

                    ;% rtB.k0vg341414
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 428;

                    ;% rtB.pm5q3j3blj
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 429;

                    ;% rtB.c12lv4krhz
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 430;

                    ;% rtB.fofchdvssl
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 431;

                    ;% rtB.epc0wawu5c
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 432;

                    ;% rtB.fe1w2afdda
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 433;

                    ;% rtB.lktamsupz3
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 434;

                    ;% rtB.hkmnzi5vi4
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 435;

                    ;% rtB.n3x3wq4wsu
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 436;

                    ;% rtB.dalwqidpga
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 437;

                    ;% rtB.i5aeoy3uwy
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 438;

                    ;% rtB.ayttns5unh
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 439;

                    ;% rtB.olos030ukp
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 443;

                    ;% rtB.h43ul03upb
                    section.data(145).logicalSrcIdx = 146;
                    section.data(145).dtTransOffset = 447;

                    ;% rtB.epga3r2mui
                    section.data(146).logicalSrcIdx = 147;
                    section.data(146).dtTransOffset = 448;

                    ;% rtB.jmbggxocin
                    section.data(147).logicalSrcIdx = 150;
                    section.data(147).dtTransOffset = 449;

                    ;% rtB.feldzcio41
                    section.data(148).logicalSrcIdx = 151;
                    section.data(148).dtTransOffset = 450;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.ezs3o1mg3j
                    section.data(1).logicalSrcIdx = 152;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.e3dipteezg
                    section.data(2).logicalSrcIdx = 153;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.jfuzs4l4zs
                    section.data(1).logicalSrcIdx = 156;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.l0rgspqm5n
                    section.data(2).logicalSrcIdx = 159;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.l2ipdboeli.od2chy5axk
                    section.data(1).logicalSrcIdx = 162;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.pgiisxljam.od2chy5axk
                    section.data(1).logicalSrcIdx = 163;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.ik3s1aw220.m1y1qm02ir
                    section.data(1).logicalSrcIdx = 164;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.ik3s1aw220.amgkmobw2z
                    section.data(2).logicalSrcIdx = 165;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.ik3s1aw220.nzn0clrnc5
                    section.data(3).logicalSrcIdx = 166;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.nc2tt33tmt.m1y1qm02ir
                    section.data(1).logicalSrcIdx = 167;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.nc2tt33tmt.amgkmobw2z
                    section.data(2).logicalSrcIdx = 168;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.nc2tt33tmt.nzn0clrnc5
                    section.data(3).logicalSrcIdx = 169;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
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
        nTotSects     = 18;
        sectIdxOffset = 7;

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
            section.nData     = 104;
            section.data(104)  = dumData; %prealloc

                    ;% rtDW.iyywllzkwf
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.eg4fysx1mx
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.bkparlcc2g
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.f3vdm2035l
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtDW.p0mm3dhbtv
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% rtDW.pwu2l4tvh1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtDW.aefzo2yzzx
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% rtDW.irgzqm0ada
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtDW.at1fopxguo
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 20;

                    ;% rtDW.ovsubkaz4j
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtDW.eh42psi5hb
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 28;

                    ;% rtDW.d1mqpftjuj
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 30;

                    ;% rtDW.pnt3tpvhnt
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 32;

                    ;% rtDW.hkz1ufztl2
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 34;

                    ;% rtDW.nzzwuluxcu
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 36;

                    ;% rtDW.l03ie2oukb
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 38;

                    ;% rtDW.hcgwk3rr3g
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 40;

                    ;% rtDW.kkmfano5y0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 41;

                    ;% rtDW.acky13em2v
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 43;

                    ;% rtDW.gricgs20cu
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 45;

                    ;% rtDW.g252mubh53
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 46;

                    ;% rtDW.jycabfb5kv
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 48;

                    ;% rtDW.hfodak4r1n
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 50;

                    ;% rtDW.a4nnclkswd
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 162;

                    ;% rtDW.okrpdklayl
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 163;

                    ;% rtDW.oisoladio2
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 164;

                    ;% rtDW.pcsoto3h0n
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 165;

                    ;% rtDW.k1cxodcfys
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 166;

                    ;% rtDW.hceryk2vkk
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 167;

                    ;% rtDW.m24htlwax5
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 169;

                    ;% rtDW.bv0s5nhud0
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 171;

                    ;% rtDW.e5tmmykfrc
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 173;

                    ;% rtDW.l5ioma3qgr
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 6839;

                    ;% rtDW.mxybol3mg3
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 6841;

                    ;% rtDW.bxnnxs3yt3
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 6843;

                    ;% rtDW.bjp3gu2hsg
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 6845;

                    ;% rtDW.kmpbiftblw
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 13511;

                    ;% rtDW.i0vkip5ppx
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 13513;

                    ;% rtDW.akpzf2ubdu
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 13515;

                    ;% rtDW.mafgllv14z
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 13517;

                    ;% rtDW.apkup22uww
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 20183;

                    ;% rtDW.d0q0zpad4g
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 20185;

                    ;% rtDW.nwjui5oppi
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 20187;

                    ;% rtDW.jip5zjvdke
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 20189;

                    ;% rtDW.jnwxusn1fr
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 26855;

                    ;% rtDW.oxbevvnwqo
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 26857;

                    ;% rtDW.gtzrn5fkce
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 26859;

                    ;% rtDW.f25qjiyt25
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 26861;

                    ;% rtDW.lqw1vh3mbr
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 33527;

                    ;% rtDW.fummjurtrs
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 33529;

                    ;% rtDW.em1buhdbtn
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 33531;

                    ;% rtDW.eu1ps152cm
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 33533;

                    ;% rtDW.h2iie3edew
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 40199;

                    ;% rtDW.il2s41132p
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 40200;

                    ;% rtDW.ecycztmnsy
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 40201;

                    ;% rtDW.cmjiuvd4kh
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 40202;

                    ;% rtDW.dq3souomli
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 40205;

                    ;% rtDW.e3t1j4tdky
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 40206;

                    ;% rtDW.jnsaa3cmdy
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 40207;

                    ;% rtDW.cakt0nkvif
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 40208;

                    ;% rtDW.mvqfzjbuew
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 40209;

                    ;% rtDW.ekqlaiqtvl
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 40210;

                    ;% rtDW.mc3bkw5pf5
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 40212;

                    ;% rtDW.nzwdjjcvqv
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 40214;

                    ;% rtDW.bmzs3jeqo0
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 40216;

                    ;% rtDW.b2bnwifjut
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 46882;

                    ;% rtDW.mt21msxevx
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 46884;

                    ;% rtDW.onltiy2qbm
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 46886;

                    ;% rtDW.ivwwh5dzgt
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 46888;

                    ;% rtDW.kxhlqntvfz
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 53554;

                    ;% rtDW.csqpczdnpt
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 53556;

                    ;% rtDW.nwq41skwpj
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 53558;

                    ;% rtDW.ogxj5xhicz
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 53560;

                    ;% rtDW.cc5ww3x2j4
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 60226;

                    ;% rtDW.kuuhed4xnh
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 60228;

                    ;% rtDW.mj0svofnx5
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 60230;

                    ;% rtDW.l4j5o1z5e1
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 60232;

                    ;% rtDW.i2m2dhfv5u
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 66898;

                    ;% rtDW.dk1gzxw5je
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 66900;

                    ;% rtDW.ezz1eslrp1
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 66902;

                    ;% rtDW.frcpgz1zzu
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 66904;

                    ;% rtDW.mn3jonc3ao
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 73570;

                    ;% rtDW.f1ef5i0cwp
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 73572;

                    ;% rtDW.luoiw1ptga
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 73574;

                    ;% rtDW.psk3af11by
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 73576;

                    ;% rtDW.dyrf0wzgmk
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 80242;

                    ;% rtDW.atweiyouss
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 80243;

                    ;% rtDW.pzmcos45f2
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 80244;

                    ;% rtDW.fqstztixgy
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 80245;

                    ;% rtDW.mw0e3nupih
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 80248;

                    ;% rtDW.jwcytez4qs
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 80249;

                    ;% rtDW.apicnljop2
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 80250;

                    ;% rtDW.ebwd1rgli2
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 80251;

                    ;% rtDW.m3vjiwfp1r
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 80252;

                    ;% rtDW.jwmtiqejai
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 80253;

                    ;% rtDW.avpg5znsih
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 80254;

                    ;% rtDW.nmrmty5wzc
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 80255;

                    ;% rtDW.dnx4ztxxiv
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 80256;

                    ;% rtDW.ltojubybbg
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 80257;

                    ;% rtDW.gt5v5gaivd
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 80260;

                    ;% rtDW.iyracbdt2g
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 80263;

                    ;% rtDW.lmyti3wz30
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 80264;

                    ;% rtDW.h1acvfc4u5
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 80265;

                    ;% rtDW.ayrsqdoxvq
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 80266;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 40;
            section.data(40)  = dumData; %prealloc

                    ;% rtDW.cj13tlwfqr
                    section.data(1).logicalSrcIdx = 104;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f1oaimgqiw
                    section.data(2).logicalSrcIdx = 105;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.oh3eq1hsa3
                    section.data(3).logicalSrcIdx = 106;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.oyksqlkafi
                    section.data(4).logicalSrcIdx = 107;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.gb201dlylm
                    section.data(5).logicalSrcIdx = 108;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.c2mad42fvj
                    section.data(6).logicalSrcIdx = 109;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.n00ioe4hbe
                    section.data(7).logicalSrcIdx = 110;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.g0u5azj3tp
                    section.data(8).logicalSrcIdx = 111;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.f0rj5uayfi
                    section.data(9).logicalSrcIdx = 112;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.chknc2oqmz
                    section.data(10).logicalSrcIdx = 113;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.nidyhufhxp
                    section.data(11).logicalSrcIdx = 114;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.lqagbbpjqo
                    section.data(12).logicalSrcIdx = 115;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.jwmqk3uiex
                    section.data(13).logicalSrcIdx = 116;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.mv2cpjpyya.LoggedData
                    section.data(14).logicalSrcIdx = 117;
                    section.data(14).dtTransOffset = 15;

                    ;% rtDW.iri21xqs2j.TimePtr
                    section.data(15).logicalSrcIdx = 118;
                    section.data(15).dtTransOffset = 17;

                    ;% rtDW.gkucfey5hr.TimePtr
                    section.data(16).logicalSrcIdx = 119;
                    section.data(16).dtTransOffset = 18;

                    ;% rtDW.ocyl3ugugx
                    section.data(17).logicalSrcIdx = 120;
                    section.data(17).dtTransOffset = 19;

                    ;% rtDW.fnivbgh0ad
                    section.data(18).logicalSrcIdx = 121;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.h2jrmzxoz4.TimePtr
                    section.data(19).logicalSrcIdx = 122;
                    section.data(19).dtTransOffset = 23;

                    ;% rtDW.iesxqmdjxw.LoggedData
                    section.data(20).logicalSrcIdx = 123;
                    section.data(20).dtTransOffset = 24;

                    ;% rtDW.eeufxfnf4d.LoggedData
                    section.data(21).logicalSrcIdx = 124;
                    section.data(21).dtTransOffset = 25;

                    ;% rtDW.kh0zfybf3y.TimePtr
                    section.data(22).logicalSrcIdx = 125;
                    section.data(22).dtTransOffset = 27;

                    ;% rtDW.nqzgxokvdn.LoggedData
                    section.data(23).logicalSrcIdx = 126;
                    section.data(23).dtTransOffset = 28;

                    ;% rtDW.p5l0frvwng.AQHandles
                    section.data(24).logicalSrcIdx = 127;
                    section.data(24).dtTransOffset = 32;

                    ;% rtDW.clljeykgr1.AQHandles
                    section.data(25).logicalSrcIdx = 128;
                    section.data(25).dtTransOffset = 33;

                    ;% rtDW.o5l3wa022n.AQHandles
                    section.data(26).logicalSrcIdx = 129;
                    section.data(26).dtTransOffset = 34;

                    ;% rtDW.o20lldxjm1.AQHandles
                    section.data(27).logicalSrcIdx = 130;
                    section.data(27).dtTransOffset = 35;

                    ;% rtDW.cerw1cxa3z.LoggedData
                    section.data(28).logicalSrcIdx = 131;
                    section.data(28).dtTransOffset = 36;

                    ;% rtDW.jgirqq3lld.AQHandles
                    section.data(29).logicalSrcIdx = 132;
                    section.data(29).dtTransOffset = 38;

                    ;% rtDW.jptmgyn2hy.AQHandles
                    section.data(30).logicalSrcIdx = 133;
                    section.data(30).dtTransOffset = 39;

                    ;% rtDW.ncsbmzl0nl.AQHandles
                    section.data(31).logicalSrcIdx = 134;
                    section.data(31).dtTransOffset = 40;

                    ;% rtDW.e3ueh0xpb3.AQHandles
                    section.data(32).logicalSrcIdx = 135;
                    section.data(32).dtTransOffset = 41;

                    ;% rtDW.piioayoohz.AQHandles
                    section.data(33).logicalSrcIdx = 136;
                    section.data(33).dtTransOffset = 42;

                    ;% rtDW.fcgzqvprag.LoggedData
                    section.data(34).logicalSrcIdx = 137;
                    section.data(34).dtTransOffset = 43;

                    ;% rtDW.efprodmswg.LoggedData
                    section.data(35).logicalSrcIdx = 138;
                    section.data(35).dtTransOffset = 46;

                    ;% rtDW.d0txuxeo0w.AQHandles
                    section.data(36).logicalSrcIdx = 139;
                    section.data(36).dtTransOffset = 48;

                    ;% rtDW.dkb3s0kryl.AQHandles
                    section.data(37).logicalSrcIdx = 140;
                    section.data(37).dtTransOffset = 49;

                    ;% rtDW.ouybfvjrju.AQHandles
                    section.data(38).logicalSrcIdx = 141;
                    section.data(38).dtTransOffset = 50;

                    ;% rtDW.efqwmkl2rp.AQHandles
                    section.data(39).logicalSrcIdx = 142;
                    section.data(39).dtTransOffset = 51;

                    ;% rtDW.pwdpmtdqqm.LoggedData
                    section.data(40).logicalSrcIdx = 143;
                    section.data(40).dtTransOffset = 52;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.om0ooqvd23
                    section.data(1).logicalSrcIdx = 144;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.p0t3wtfjhc
                    section.data(2).logicalSrcIdx = 145;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.dn5jy3yus2
                    section.data(1).logicalSrcIdx = 146;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.m5rfl1s1qt
                    section.data(2).logicalSrcIdx = 147;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtDW.kqp5b5k44j
                    section.data(1).logicalSrcIdx = 148;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mwo052veq4
                    section.data(2).logicalSrcIdx = 149;
                    section.data(2).dtTransOffset = 54;

                    ;% rtDW.glufmomx3u
                    section.data(3).logicalSrcIdx = 150;
                    section.data(3).dtTransOffset = 55;

                    ;% rtDW.crg03beu3x
                    section.data(4).logicalSrcIdx = 151;
                    section.data(4).dtTransOffset = 60;

                    ;% rtDW.lx0lpxffkf.PrevIndex
                    section.data(5).logicalSrcIdx = 152;
                    section.data(5).dtTransOffset = 65;

                    ;% rtDW.p4yfuzxnov.PrevIndex
                    section.data(6).logicalSrcIdx = 153;
                    section.data(6).dtTransOffset = 66;

                    ;% rtDW.nxq0123mtn
                    section.data(7).logicalSrcIdx = 154;
                    section.data(7).dtTransOffset = 67;

                    ;% rtDW.f4p3hidioq
                    section.data(8).logicalSrcIdx = 155;
                    section.data(8).dtTransOffset = 72;

                    ;% rtDW.mmawmidnpz.PrevIndex
                    section.data(9).logicalSrcIdx = 156;
                    section.data(9).dtTransOffset = 77;

                    ;% rtDW.jtdpjdznjm.PrevIndex
                    section.data(10).logicalSrcIdx = 157;
                    section.data(10).dtTransOffset = 78;

                    ;% rtDW.gvxi5xuhay
                    section.data(11).logicalSrcIdx = 158;
                    section.data(11).dtTransOffset = 79;

                    ;% rtDW.psunv1nlzl
                    section.data(12).logicalSrcIdx = 159;
                    section.data(12).dtTransOffset = 80;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.caxb1busmj
                    section.data(1).logicalSrcIdx = 160;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cgklepmakj
                    section.data(2).logicalSrcIdx = 161;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mqqktlx1aa
                    section.data(3).logicalSrcIdx = 162;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.hn40u5od0q
                    section.data(4).logicalSrcIdx = 163;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.c552vmqk5k
                    section.data(5).logicalSrcIdx = 164;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ki3cuq4dmp
                    section.data(6).logicalSrcIdx = 165;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 28;
            section.data(28)  = dumData; %prealloc

                    ;% rtDW.lpha3u2wfp
                    section.data(1).logicalSrcIdx = 166;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.j1x4qb45ak
                    section.data(2).logicalSrcIdx = 167;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.c3i5gpoda5
                    section.data(3).logicalSrcIdx = 168;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dxcfru5kjc
                    section.data(4).logicalSrcIdx = 169;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.f0mrecfs5m
                    section.data(5).logicalSrcIdx = 170;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.m0a2meaeq5
                    section.data(6).logicalSrcIdx = 171;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.phjawx2yhl
                    section.data(7).logicalSrcIdx = 172;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.hxemhgj1yq
                    section.data(8).logicalSrcIdx = 173;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.ctkoovyndv
                    section.data(9).logicalSrcIdx = 174;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.khapkb23og
                    section.data(10).logicalSrcIdx = 175;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.onlrif1m0e
                    section.data(11).logicalSrcIdx = 176;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.idubykuygp
                    section.data(12).logicalSrcIdx = 177;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.m1dpfe453z
                    section.data(13).logicalSrcIdx = 178;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.fjyovv2g1l
                    section.data(14).logicalSrcIdx = 179;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.cpezygvpa5
                    section.data(15).logicalSrcIdx = 180;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.j0oazvb5q3
                    section.data(16).logicalSrcIdx = 181;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.b1utjiqmec
                    section.data(17).logicalSrcIdx = 182;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.nyul3gyjpk
                    section.data(18).logicalSrcIdx = 183;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.pxmwbkoak0
                    section.data(19).logicalSrcIdx = 184;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.c0coxva4kb
                    section.data(20).logicalSrcIdx = 185;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.ay5maw0kp1
                    section.data(21).logicalSrcIdx = 186;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.dq5mls4ffp
                    section.data(22).logicalSrcIdx = 187;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.axdy0nhprx
                    section.data(23).logicalSrcIdx = 188;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.orojirsnzs
                    section.data(24).logicalSrcIdx = 189;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.ayb3vcha0i
                    section.data(25).logicalSrcIdx = 190;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.bg1zs3brty
                    section.data(26).logicalSrcIdx = 191;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.gsmdjr11nj
                    section.data(27).logicalSrcIdx = 192;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.dz3vcol4zs
                    section.data(28).logicalSrcIdx = 193;
                    section.data(28).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.imuqbaiz25
                    section.data(1).logicalSrcIdx = 194;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dcx4fqll5r
                    section.data(2).logicalSrcIdx = 195;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cm1wpbbfu0
                    section.data(3).logicalSrcIdx = 196;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cqnxxsfn3n
                    section.data(4).logicalSrcIdx = 197;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.mwlases2wk
                    section.data(5).logicalSrcIdx = 198;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.nrtrpm1vbm
                    section.data(6).logicalSrcIdx = 199;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.jgk04t4xwa
                    section.data(7).logicalSrcIdx = 200;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.hj0ue0qykk
                    section.data(8).logicalSrcIdx = 201;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.hhjt0nqpca
                    section.data(9).logicalSrcIdx = 202;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.cmpx5vcuoc
                    section.data(10).logicalSrcIdx = 203;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.mu5iczhfag
                    section.data(11).logicalSrcIdx = 204;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.i0pbd25pwm
                    section.data(12).logicalSrcIdx = 205;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.i0tcehxjnv
                    section.data(13).logicalSrcIdx = 206;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.l2ipdboeli.labfb1voxm
                    section.data(1).logicalSrcIdx = 207;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.l2ipdboeli.pfkic4fkpj
                    section.data(2).logicalSrcIdx = 208;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.l2ipdboeli.katnwwtjf0
                    section.data(3).logicalSrcIdx = 209;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.l2ipdboeli.gbtvozmuxb
                    section.data(1).logicalSrcIdx = 210;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.l2ipdboeli.m4pbicbspr
                    section.data(1).logicalSrcIdx = 211;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.l2ipdboeli.aefovjzruy
                    section.data(2).logicalSrcIdx = 212;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.l2ipdboeli.phnzvzv3xc
                    section.data(3).logicalSrcIdx = 213;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.l2ipdboeli.j5qp10qdau
                    section.data(4).logicalSrcIdx = 214;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.pgiisxljam.labfb1voxm
                    section.data(1).logicalSrcIdx = 215;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pgiisxljam.pfkic4fkpj
                    section.data(2).logicalSrcIdx = 216;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.pgiisxljam.katnwwtjf0
                    section.data(3).logicalSrcIdx = 217;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.pgiisxljam.gbtvozmuxb
                    section.data(1).logicalSrcIdx = 218;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.pgiisxljam.m4pbicbspr
                    section.data(1).logicalSrcIdx = 219;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pgiisxljam.aefovjzruy
                    section.data(2).logicalSrcIdx = 220;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.pgiisxljam.phnzvzv3xc
                    section.data(3).logicalSrcIdx = 221;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.pgiisxljam.j5qp10qdau
                    section.data(4).logicalSrcIdx = 222;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ik3s1aw220.b0opggssyg
                    section.data(1).logicalSrcIdx = 223;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ik3s1aw220.lzz4y3ssut
                    section.data(1).logicalSrcIdx = 224;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nc2tt33tmt.b0opggssyg
                    section.data(1).logicalSrcIdx = 225;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nc2tt33tmt.lzz4y3ssut
                    section.data(1).logicalSrcIdx = 226;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
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


    targMap.checksum0 = 1342818598;
    targMap.checksum1 = 1324514584;
    targMap.checksum2 = 1260754188;
    targMap.checksum3 = 1329169795;

