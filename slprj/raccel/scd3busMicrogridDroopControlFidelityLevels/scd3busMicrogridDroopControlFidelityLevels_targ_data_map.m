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

            section.nData     = 214;
            section.data(214)  = dumData; %prealloc

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

                    ;% rtP.fromWS_Signal1_Time0
                    section.data(48).logicalSrcIdx = 107;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.fromWS_Signal1_Data0
                    section.data(49).logicalSrcIdx = 108;
                    section.data(49).dtTransOffset = 51;

                    ;% rtP.Integrator_gainval_avayg33ayj
                    section.data(50).logicalSrcIdx = 109;
                    section.data(50).dtTransOffset = 55;

                    ;% rtP.Integrator_gainval_bh1byogw3o
                    section.data(51).logicalSrcIdx = 110;
                    section.data(51).dtTransOffset = 56;

                    ;% rtP.Integrator_IC
                    section.data(52).logicalSrcIdx = 111;
                    section.data(52).dtTransOffset = 57;

                    ;% rtP.UnitDelay1_InitialCondition_igxde5r1oa
                    section.data(53).logicalSrcIdx = 112;
                    section.data(53).dtTransOffset = 58;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(54).logicalSrcIdx = 113;
                    section.data(54).dtTransOffset = 59;

                    ;% rtP.Delay_InitialCondition
                    section.data(55).logicalSrcIdx = 114;
                    section.data(55).dtTransOffset = 60;

                    ;% rtP.Gain_Gain
                    section.data(56).logicalSrcIdx = 115;
                    section.data(56).dtTransOffset = 61;

                    ;% rtP.Integrator_gainval_g1hx0pgpel
                    section.data(57).logicalSrcIdx = 116;
                    section.data(57).dtTransOffset = 62;

                    ;% rtP.Integrator_IC_g4xqnrlohi
                    section.data(58).logicalSrcIdx = 117;
                    section.data(58).dtTransOffset = 63;

                    ;% rtP.UnitDelay1_InitialCondition_mkjhh3hej3
                    section.data(59).logicalSrcIdx = 118;
                    section.data(59).dtTransOffset = 64;

                    ;% rtP.UnitDelay2_InitialCondition_ky4da5qoff
                    section.data(60).logicalSrcIdx = 119;
                    section.data(60).dtTransOffset = 65;

                    ;% rtP.Delay_InitialCondition_pxsgay3n2d
                    section.data(61).logicalSrcIdx = 120;
                    section.data(61).dtTransOffset = 66;

                    ;% rtP.Gain_Gain_msl2mctrek
                    section.data(62).logicalSrcIdx = 121;
                    section.data(62).dtTransOffset = 67;

                    ;% rtP.Integrator_gainval_g2bxhp4r3m
                    section.data(63).logicalSrcIdx = 122;
                    section.data(63).dtTransOffset = 68;

                    ;% rtP.Integrator_IC_ol30bkacbk
                    section.data(64).logicalSrcIdx = 123;
                    section.data(64).dtTransOffset = 69;

                    ;% rtP.UnitDelay1_InitialCondition_mwdjagajvk
                    section.data(65).logicalSrcIdx = 124;
                    section.data(65).dtTransOffset = 70;

                    ;% rtP.UnitDelay2_InitialCondition_oacume4w23
                    section.data(66).logicalSrcIdx = 125;
                    section.data(66).dtTransOffset = 71;

                    ;% rtP.Delay_InitialCondition_jdzlvwaqw3
                    section.data(67).logicalSrcIdx = 126;
                    section.data(67).dtTransOffset = 72;

                    ;% rtP.Gain_Gain_ka0ohvwpd2
                    section.data(68).logicalSrcIdx = 127;
                    section.data(68).dtTransOffset = 73;

                    ;% rtP.Integrator_gainval_nec3pprea3
                    section.data(69).logicalSrcIdx = 128;
                    section.data(69).dtTransOffset = 74;

                    ;% rtP.Integrator_IC_fe5bpfeox5
                    section.data(70).logicalSrcIdx = 129;
                    section.data(70).dtTransOffset = 75;

                    ;% rtP.UnitDelay1_InitialCondition_jazgyvwy0b
                    section.data(71).logicalSrcIdx = 130;
                    section.data(71).dtTransOffset = 76;

                    ;% rtP.UnitDelay2_InitialCondition_c335id2yur
                    section.data(72).logicalSrcIdx = 131;
                    section.data(72).dtTransOffset = 77;

                    ;% rtP.Delay_InitialCondition_kvqzfvuqvw
                    section.data(73).logicalSrcIdx = 132;
                    section.data(73).dtTransOffset = 78;

                    ;% rtP.Gain_Gain_n2i2fdezd0
                    section.data(74).logicalSrcIdx = 133;
                    section.data(74).dtTransOffset = 79;

                    ;% rtP.Integrator_gainval_iydjvvm3uf
                    section.data(75).logicalSrcIdx = 134;
                    section.data(75).dtTransOffset = 80;

                    ;% rtP.Integrator_IC_klk0nn5nsf
                    section.data(76).logicalSrcIdx = 135;
                    section.data(76).dtTransOffset = 81;

                    ;% rtP.UnitDelay1_InitialCondition_lqiknbltiv
                    section.data(77).logicalSrcIdx = 136;
                    section.data(77).dtTransOffset = 82;

                    ;% rtP.UnitDelay2_InitialCondition_lq1eghcbab
                    section.data(78).logicalSrcIdx = 137;
                    section.data(78).dtTransOffset = 83;

                    ;% rtP.Delay_InitialCondition_eo1i4emrrh
                    section.data(79).logicalSrcIdx = 138;
                    section.data(79).dtTransOffset = 84;

                    ;% rtP.Gain_Gain_ewisuu03rb
                    section.data(80).logicalSrcIdx = 139;
                    section.data(80).dtTransOffset = 85;

                    ;% rtP.Integrator_gainval_h1oputbahl
                    section.data(81).logicalSrcIdx = 140;
                    section.data(81).dtTransOffset = 86;

                    ;% rtP.Integrator_IC_edmj50xozy
                    section.data(82).logicalSrcIdx = 141;
                    section.data(82).dtTransOffset = 87;

                    ;% rtP.UnitDelay1_InitialCondition_ls5nawmwll
                    section.data(83).logicalSrcIdx = 142;
                    section.data(83).dtTransOffset = 88;

                    ;% rtP.UnitDelay2_InitialCondition_p5x2r4bsum
                    section.data(84).logicalSrcIdx = 143;
                    section.data(84).dtTransOffset = 89;

                    ;% rtP.Delay_InitialCondition_jdx3lhztnl
                    section.data(85).logicalSrcIdx = 144;
                    section.data(85).dtTransOffset = 90;

                    ;% rtP.Gain_Gain_n13h0tbo3s
                    section.data(86).logicalSrcIdx = 145;
                    section.data(86).dtTransOffset = 91;

                    ;% rtP.Gain_Gain_ij5ephcub4
                    section.data(87).logicalSrcIdx = 146;
                    section.data(87).dtTransOffset = 92;

                    ;% rtP.Integrator_IC_i2u0y3f22e
                    section.data(88).logicalSrcIdx = 147;
                    section.data(88).dtTransOffset = 93;

                    ;% rtP.FromWorkspace_Time0
                    section.data(89).logicalSrcIdx = 148;
                    section.data(89).dtTransOffset = 94;

                    ;% rtP.FromWorkspace_Data0
                    section.data(90).logicalSrcIdx = 149;
                    section.data(90).dtTransOffset = 96;

                    ;% rtP.Gain1_Gain_mocebkriwh
                    section.data(91).logicalSrcIdx = 150;
                    section.data(91).dtTransOffset = 98;

                    ;% rtP.Integrator_gainval_gjezqe5f5f
                    section.data(92).logicalSrcIdx = 151;
                    section.data(92).dtTransOffset = 99;

                    ;% rtP.Integrator_gainval_prwo1fbvrt
                    section.data(93).logicalSrcIdx = 152;
                    section.data(93).dtTransOffset = 100;

                    ;% rtP.Gain1_Gain_cwovvihjzo
                    section.data(94).logicalSrcIdx = 153;
                    section.data(94).dtTransOffset = 101;

                    ;% rtP.Initial_Value
                    section.data(95).logicalSrcIdx = 154;
                    section.data(95).dtTransOffset = 102;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_cxzqbmd0qn
                    section.data(96).logicalSrcIdx = 155;
                    section.data(96).dtTransOffset = 103;

                    ;% rtP.avoiddivisionby0_UpperSat
                    section.data(97).logicalSrcIdx = 156;
                    section.data(97).dtTransOffset = 104;

                    ;% rtP.avoiddivisionby0_LowerSat
                    section.data(98).logicalSrcIdx = 157;
                    section.data(98).dtTransOffset = 105;

                    ;% rtP.UnitDelay2_InitialCondition_p5dmi4fyvs
                    section.data(99).logicalSrcIdx = 158;
                    section.data(99).dtTransOffset = 106;

                    ;% rtP.Integrator_gainval_aiqo4pqknj
                    section.data(100).logicalSrcIdx = 159;
                    section.data(100).dtTransOffset = 107;

                    ;% rtP.Gain1_Gain_abh3hvbccc
                    section.data(101).logicalSrcIdx = 160;
                    section.data(101).dtTransOffset = 108;

                    ;% rtP.Constant1_Value_lsknndl14i
                    section.data(102).logicalSrcIdx = 161;
                    section.data(102).dtTransOffset = 109;

                    ;% rtP.Integrator_gainval_j4gmb2gwsc
                    section.data(103).logicalSrcIdx = 162;
                    section.data(103).dtTransOffset = 110;

                    ;% rtP.Integrator_UpperSat_lm3ewrrsxh
                    section.data(104).logicalSrcIdx = 163;
                    section.data(104).dtTransOffset = 111;

                    ;% rtP.Integrator_LowerSat_hjh2vovvsr
                    section.data(105).logicalSrcIdx = 164;
                    section.data(105).dtTransOffset = 112;

                    ;% rtP.Saturation_UpperSat_gox4btb11r
                    section.data(106).logicalSrcIdx = 165;
                    section.data(106).dtTransOffset = 113;

                    ;% rtP.Saturation_LowerSat_axo2ygf3i0
                    section.data(107).logicalSrcIdx = 166;
                    section.data(107).dtTransOffset = 114;

                    ;% rtP.Gain1_Gain_e2meerxskp
                    section.data(108).logicalSrcIdx = 167;
                    section.data(108).dtTransOffset = 115;

                    ;% rtP.TransportDelay_Delay_ag53vhwsyv
                    section.data(109).logicalSrcIdx = 168;
                    section.data(109).dtTransOffset = 116;

                    ;% rtP.TransportDelay_InitOutput_hyaxfclhky
                    section.data(110).logicalSrcIdx = 169;
                    section.data(110).dtTransOffset = 117;

                    ;% rtP.TransportDelay1_Delay_fmvsbqj5tj
                    section.data(111).logicalSrcIdx = 170;
                    section.data(111).dtTransOffset = 118;

                    ;% rtP.TransportDelay1_InitOutput_pmbwserd04
                    section.data(112).logicalSrcIdx = 171;
                    section.data(112).dtTransOffset = 119;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_bfxxjmpabm
                    section.data(113).logicalSrcIdx = 172;
                    section.data(113).dtTransOffset = 120;

                    ;% rtP.DiscreteTimeIntegrator1_IC_akx0cgm0yv
                    section.data(114).logicalSrcIdx = 173;
                    section.data(114).dtTransOffset = 121;

                    ;% rtP.DiscreteTimeIntegrator_gainval_lrim5qbkf2
                    section.data(115).logicalSrcIdx = 174;
                    section.data(115).dtTransOffset = 122;

                    ;% rtP.DiscreteTimeIntegrator_IC_nxtwlpx203
                    section.data(116).logicalSrcIdx = 175;
                    section.data(116).dtTransOffset = 123;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(117).logicalSrcIdx = 176;
                    section.data(117).dtTransOffset = 124;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(118).logicalSrcIdx = 177;
                    section.data(118).dtTransOffset = 128;

                    ;% rtP.Integrator_gainval_nbtau22bcs
                    section.data(119).logicalSrcIdx = 178;
                    section.data(119).dtTransOffset = 132;

                    ;% rtP.Integrator_gainval_lx3n3x4rqc
                    section.data(120).logicalSrcIdx = 179;
                    section.data(120).dtTransOffset = 133;

                    ;% rtP.Integrator_IC_cooq3xxsvj
                    section.data(121).logicalSrcIdx = 180;
                    section.data(121).dtTransOffset = 134;

                    ;% rtP.UnitDelay1_InitialCondition_j5udodixng
                    section.data(122).logicalSrcIdx = 181;
                    section.data(122).dtTransOffset = 135;

                    ;% rtP.UnitDelay2_InitialCondition_lxsa4gacjt
                    section.data(123).logicalSrcIdx = 182;
                    section.data(123).dtTransOffset = 136;

                    ;% rtP.Delay_InitialCondition_a55iiq0o4f
                    section.data(124).logicalSrcIdx = 183;
                    section.data(124).dtTransOffset = 137;

                    ;% rtP.Gain_Gain_g1bxa5yagb
                    section.data(125).logicalSrcIdx = 184;
                    section.data(125).dtTransOffset = 138;

                    ;% rtP.Integrator_gainval_j3zllfw2ya
                    section.data(126).logicalSrcIdx = 185;
                    section.data(126).dtTransOffset = 139;

                    ;% rtP.Integrator_IC_o1gepkaxe2
                    section.data(127).logicalSrcIdx = 186;
                    section.data(127).dtTransOffset = 140;

                    ;% rtP.UnitDelay1_InitialCondition_jfuykwtijp
                    section.data(128).logicalSrcIdx = 187;
                    section.data(128).dtTransOffset = 141;

                    ;% rtP.UnitDelay2_InitialCondition_lratdejrvc
                    section.data(129).logicalSrcIdx = 188;
                    section.data(129).dtTransOffset = 142;

                    ;% rtP.Delay_InitialCondition_iyzd5f3bo1
                    section.data(130).logicalSrcIdx = 189;
                    section.data(130).dtTransOffset = 143;

                    ;% rtP.Gain_Gain_lhnhdifs0e
                    section.data(131).logicalSrcIdx = 190;
                    section.data(131).dtTransOffset = 144;

                    ;% rtP.Integrator_gainval_n4mbdo45bw
                    section.data(132).logicalSrcIdx = 191;
                    section.data(132).dtTransOffset = 145;

                    ;% rtP.Integrator_IC_evhka53zqk
                    section.data(133).logicalSrcIdx = 192;
                    section.data(133).dtTransOffset = 146;

                    ;% rtP.UnitDelay1_InitialCondition_izykpui1wt
                    section.data(134).logicalSrcIdx = 193;
                    section.data(134).dtTransOffset = 147;

                    ;% rtP.UnitDelay2_InitialCondition_ec3b0v2ked
                    section.data(135).logicalSrcIdx = 194;
                    section.data(135).dtTransOffset = 148;

                    ;% rtP.Delay_InitialCondition_bavhdtocgy
                    section.data(136).logicalSrcIdx = 195;
                    section.data(136).dtTransOffset = 149;

                    ;% rtP.Gain_Gain_o4zcph2u4p
                    section.data(137).logicalSrcIdx = 196;
                    section.data(137).dtTransOffset = 150;

                    ;% rtP.Integrator_gainval_paeznd5jot
                    section.data(138).logicalSrcIdx = 197;
                    section.data(138).dtTransOffset = 151;

                    ;% rtP.Integrator_IC_ngdqv10nj2
                    section.data(139).logicalSrcIdx = 198;
                    section.data(139).dtTransOffset = 152;

                    ;% rtP.UnitDelay1_InitialCondition_bosg34hruf
                    section.data(140).logicalSrcIdx = 199;
                    section.data(140).dtTransOffset = 153;

                    ;% rtP.UnitDelay2_InitialCondition_iqiy2ig2a2
                    section.data(141).logicalSrcIdx = 200;
                    section.data(141).dtTransOffset = 154;

                    ;% rtP.Delay_InitialCondition_lcu1ixidx5
                    section.data(142).logicalSrcIdx = 201;
                    section.data(142).dtTransOffset = 155;

                    ;% rtP.Gain_Gain_knn0armyna
                    section.data(143).logicalSrcIdx = 202;
                    section.data(143).dtTransOffset = 156;

                    ;% rtP.Integrator_gainval_cewndrxcpd
                    section.data(144).logicalSrcIdx = 203;
                    section.data(144).dtTransOffset = 157;

                    ;% rtP.Integrator_IC_bwgl5a0wob
                    section.data(145).logicalSrcIdx = 204;
                    section.data(145).dtTransOffset = 158;

                    ;% rtP.UnitDelay1_InitialCondition_nggtcjmvxt
                    section.data(146).logicalSrcIdx = 205;
                    section.data(146).dtTransOffset = 159;

                    ;% rtP.UnitDelay2_InitialCondition_ofqprotkgb
                    section.data(147).logicalSrcIdx = 206;
                    section.data(147).dtTransOffset = 160;

                    ;% rtP.Delay_InitialCondition_hqkwrz2i2i
                    section.data(148).logicalSrcIdx = 207;
                    section.data(148).dtTransOffset = 161;

                    ;% rtP.Gain_Gain_in5c1sqasm
                    section.data(149).logicalSrcIdx = 208;
                    section.data(149).dtTransOffset = 162;

                    ;% rtP.Integrator_gainval_ksirpb4yxq
                    section.data(150).logicalSrcIdx = 209;
                    section.data(150).dtTransOffset = 163;

                    ;% rtP.Integrator_IC_fpbmwehjlf
                    section.data(151).logicalSrcIdx = 210;
                    section.data(151).dtTransOffset = 164;

                    ;% rtP.UnitDelay1_InitialCondition_eyrhkzaysm
                    section.data(152).logicalSrcIdx = 211;
                    section.data(152).dtTransOffset = 165;

                    ;% rtP.UnitDelay2_InitialCondition_eqc4tfjodc
                    section.data(153).logicalSrcIdx = 212;
                    section.data(153).dtTransOffset = 166;

                    ;% rtP.Delay_InitialCondition_gukmfnnmw2
                    section.data(154).logicalSrcIdx = 213;
                    section.data(154).dtTransOffset = 167;

                    ;% rtP.Gain_Gain_dgbqv335s1
                    section.data(155).logicalSrcIdx = 214;
                    section.data(155).dtTransOffset = 168;

                    ;% rtP.Gain_Gain_pcqi2zh5ks
                    section.data(156).logicalSrcIdx = 215;
                    section.data(156).dtTransOffset = 169;

                    ;% rtP.Integrator_IC_dkgbnnaxcx
                    section.data(157).logicalSrcIdx = 216;
                    section.data(157).dtTransOffset = 170;

                    ;% rtP.FromWorkspace2_Time0
                    section.data(158).logicalSrcIdx = 217;
                    section.data(158).dtTransOffset = 171;

                    ;% rtP.FromWorkspace2_Data0
                    section.data(159).logicalSrcIdx = 218;
                    section.data(159).dtTransOffset = 173;

                    ;% rtP.Gain1_Gain_algp55cnlc
                    section.data(160).logicalSrcIdx = 219;
                    section.data(160).dtTransOffset = 175;

                    ;% rtP.Integrator_gainval_f0rqsj0fnp
                    section.data(161).logicalSrcIdx = 220;
                    section.data(161).dtTransOffset = 176;

                    ;% rtP.Integrator_gainval_kexeikjgzm
                    section.data(162).logicalSrcIdx = 221;
                    section.data(162).dtTransOffset = 177;

                    ;% rtP.Gain1_Gain_kbqppqxrgb
                    section.data(163).logicalSrcIdx = 222;
                    section.data(163).dtTransOffset = 178;

                    ;% rtP.Initial_Value_j4wczc1lxq
                    section.data(164).logicalSrcIdx = 223;
                    section.data(164).dtTransOffset = 179;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_arqevlqjww
                    section.data(165).logicalSrcIdx = 224;
                    section.data(165).dtTransOffset = 180;

                    ;% rtP.avoiddivisionby0_UpperSat_nx01wqrouz
                    section.data(166).logicalSrcIdx = 225;
                    section.data(166).dtTransOffset = 181;

                    ;% rtP.avoiddivisionby0_LowerSat_avgk30jeg3
                    section.data(167).logicalSrcIdx = 226;
                    section.data(167).dtTransOffset = 182;

                    ;% rtP.UnitDelay2_InitialCondition_pvc43f4wjv
                    section.data(168).logicalSrcIdx = 227;
                    section.data(168).dtTransOffset = 183;

                    ;% rtP.Gain_Gain_edy3rsxlbj
                    section.data(169).logicalSrcIdx = 228;
                    section.data(169).dtTransOffset = 184;

                    ;% rtP.Gain_Gain_liiiiertx5
                    section.data(170).logicalSrcIdx = 229;
                    section.data(170).dtTransOffset = 185;

                    ;% rtP.Integrator_gainval_jiozqx4w4v
                    section.data(171).logicalSrcIdx = 230;
                    section.data(171).dtTransOffset = 186;

                    ;% rtP.Gain1_Gain_b4avjwyrj2
                    section.data(172).logicalSrcIdx = 231;
                    section.data(172).dtTransOffset = 187;

                    ;% rtP.Constant1_Value_da1dwznx44
                    section.data(173).logicalSrcIdx = 232;
                    section.data(173).dtTransOffset = 188;

                    ;% rtP.Integrator_gainval_coazxg22nt
                    section.data(174).logicalSrcIdx = 233;
                    section.data(174).dtTransOffset = 189;

                    ;% rtP.Integrator_UpperSat_hpvvxjqfd4
                    section.data(175).logicalSrcIdx = 234;
                    section.data(175).dtTransOffset = 190;

                    ;% rtP.Integrator_LowerSat_i10qscebp4
                    section.data(176).logicalSrcIdx = 235;
                    section.data(176).dtTransOffset = 191;

                    ;% rtP.Saturation_UpperSat_i15q0blda2
                    section.data(177).logicalSrcIdx = 236;
                    section.data(177).dtTransOffset = 192;

                    ;% rtP.Saturation_LowerSat_jx0zzxgaew
                    section.data(178).logicalSrcIdx = 237;
                    section.data(178).dtTransOffset = 193;

                    ;% rtP.Gain1_Gain_gi0auafmvm
                    section.data(179).logicalSrcIdx = 238;
                    section.data(179).dtTransOffset = 194;

                    ;% rtP.Integrator_gainval_o23ns0zq3s
                    section.data(180).logicalSrcIdx = 239;
                    section.data(180).dtTransOffset = 195;

                    ;% rtP.Gain1_Gain_b02alh1u5u
                    section.data(181).logicalSrcIdx = 240;
                    section.data(181).dtTransOffset = 196;

                    ;% rtP.Constant1_Value_ktx3gyatq5
                    section.data(182).logicalSrcIdx = 241;
                    section.data(182).dtTransOffset = 197;

                    ;% rtP.Integrator_gainval_axkjs1f2yw
                    section.data(183).logicalSrcIdx = 242;
                    section.data(183).dtTransOffset = 198;

                    ;% rtP.Integrator_UpperSat_nxtktwi3hv
                    section.data(184).logicalSrcIdx = 243;
                    section.data(184).dtTransOffset = 199;

                    ;% rtP.Integrator_LowerSat_micq5t2bis
                    section.data(185).logicalSrcIdx = 244;
                    section.data(185).dtTransOffset = 200;

                    ;% rtP.Saturation_UpperSat_kp53gt01p2
                    section.data(186).logicalSrcIdx = 245;
                    section.data(186).dtTransOffset = 201;

                    ;% rtP.Saturation_LowerSat_p4o1xc0k2h
                    section.data(187).logicalSrcIdx = 246;
                    section.data(187).dtTransOffset = 202;

                    ;% rtP.Gain1_Gain_kgot1sgoty
                    section.data(188).logicalSrcIdx = 247;
                    section.data(188).dtTransOffset = 203;

                    ;% rtP.Constant1_Value_lodywi0z2n
                    section.data(189).logicalSrcIdx = 248;
                    section.data(189).dtTransOffset = 204;

                    ;% rtP.Constant1_Value_ipdttkadk5
                    section.data(190).logicalSrcIdx = 249;
                    section.data(190).dtTransOffset = 205;

                    ;% rtP.Constant2_Value
                    section.data(191).logicalSrcIdx = 250;
                    section.data(191).dtTransOffset = 206;

                    ;% rtP.Constant3_Value
                    section.data(192).logicalSrcIdx = 251;
                    section.data(192).dtTransOffset = 207;

                    ;% rtP.Sequence_Value
                    section.data(193).logicalSrcIdx = 252;
                    section.data(193).dtTransOffset = 208;

                    ;% rtP.V0_Value
                    section.data(194).logicalSrcIdx = 253;
                    section.data(194).dtTransOffset = 209;

                    ;% rtP.Constant5_Value
                    section.data(195).logicalSrcIdx = 254;
                    section.data(195).dtTransOffset = 210;

                    ;% rtP.Constant1_Value_brrjsvceec
                    section.data(196).logicalSrcIdx = 255;
                    section.data(196).dtTransOffset = 211;

                    ;% rtP.Constant2_Value_lexwhwkcr1
                    section.data(197).logicalSrcIdx = 256;
                    section.data(197).dtTransOffset = 212;

                    ;% rtP.Constant3_Value_lyqvw4nurv
                    section.data(198).logicalSrcIdx = 257;
                    section.data(198).dtTransOffset = 213;

                    ;% rtP.Sequence_Value_phlzt4e1pz
                    section.data(199).logicalSrcIdx = 258;
                    section.data(199).dtTransOffset = 214;

                    ;% rtP.V0_Value_gfkw3a205u
                    section.data(200).logicalSrcIdx = 259;
                    section.data(200).dtTransOffset = 215;

                    ;% rtP.D_init_Value
                    section.data(201).logicalSrcIdx = 260;
                    section.data(201).dtTransOffset = 216;

                    ;% rtP.D_max_Value
                    section.data(202).logicalSrcIdx = 261;
                    section.data(202).dtTransOffset = 217;

                    ;% rtP.D_min_Value
                    section.data(203).logicalSrcIdx = 262;
                    section.data(203).dtTransOffset = 218;

                    ;% rtP.Delta_D_Value
                    section.data(204).logicalSrcIdx = 263;
                    section.data(204).dtTransOffset = 219;

                    ;% rtP.RTP_44647E90_TFIXED_Value
                    section.data(205).logicalSrcIdx = 264;
                    section.data(205).dtTransOffset = 220;

                    ;% rtP.D_init_Value_gzmutkxqpm
                    section.data(206).logicalSrcIdx = 265;
                    section.data(206).dtTransOffset = 221;

                    ;% rtP.D_max_Value_b3iaci24kf
                    section.data(207).logicalSrcIdx = 266;
                    section.data(207).dtTransOffset = 222;

                    ;% rtP.D_min_Value_jxuzma2pr2
                    section.data(208).logicalSrcIdx = 267;
                    section.data(208).dtTransOffset = 223;

                    ;% rtP.Delta_D_Value_nexecftfus
                    section.data(209).logicalSrcIdx = 268;
                    section.data(209).dtTransOffset = 224;

                    ;% rtP.RTP_DD0943EF_TFIXED_Value
                    section.data(210).logicalSrcIdx = 269;
                    section.data(210).dtTransOffset = 225;

                    ;% rtP.RTP_1D2E87C1_IL_Value
                    section.data(211).logicalSrcIdx = 270;
                    section.data(211).dtTransOffset = 226;

                    ;% rtP.RTP_6A29B757_IL_Value
                    section.data(212).logicalSrcIdx = 271;
                    section.data(212).dtTransOffset = 229;

                    ;% rtP.RTP_A18535C3_IL_Value
                    section.data(213).logicalSrcIdx = 272;
                    section.data(213).dtTransOffset = 232;

                    ;% rtP.RTP_D6820555_IL_Value
                    section.data(214).logicalSrcIdx = 273;
                    section.data(214).dtTransOffset = 235;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtP.alpha2_Gain
                    section.data(1).logicalSrcIdx = 274;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.alpha_Gain
                    section.data(2).logicalSrcIdx = 275;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.alpha2_Gain_edh0qhxj4e
                    section.data(3).logicalSrcIdx = 276;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.alpha_Gain_pkcgaplt3m
                    section.data(4).logicalSrcIdx = 277;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.alpha_Gain_h144fvpml1
                    section.data(5).logicalSrcIdx = 278;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.alpha2_Gain_k54l5bjcyn
                    section.data(6).logicalSrcIdx = 279;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.alpha_Gain_ns5srwfp4a
                    section.data(7).logicalSrcIdx = 280;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.alpha2_Gain_b2lryd4erl
                    section.data(8).logicalSrcIdx = 281;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.alpha2_Gain_jmjocn5324
                    section.data(9).logicalSrcIdx = 282;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.alpha_Gain_chzz2ghjpt
                    section.data(10).logicalSrcIdx = 283;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.alpha2_Gain_jdfqf2swbm
                    section.data(11).logicalSrcIdx = 284;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.alpha_Gain_mt0yc41pmx
                    section.data(12).logicalSrcIdx = 285;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.alpha_Gain_ebrttocmwz
                    section.data(13).logicalSrcIdx = 286;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.alpha2_Gain_g1epyvb0j5
                    section.data(14).logicalSrcIdx = 287;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.alpha_Gain_c32fofybnv
                    section.data(15).logicalSrcIdx = 288;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.alpha2_Gain_c0nmmexjjw
                    section.data(16).logicalSrcIdx = 289;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtP.Output_InitialCondition
                    section.data(1).logicalSrcIdx = 290;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Output_InitialCondition_i4kbzdl5hu
                    section.data(2).logicalSrcIdx = 291;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.FixPtConstant_Value
                    section.data(3).logicalSrcIdx = 292;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Constant_Value
                    section.data(4).logicalSrcIdx = 293;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.FixPtConstant_Value_kxw1vl0agc
                    section.data(5).logicalSrcIdx = 294;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant_Value_py20bfahtq
                    section.data(6).logicalSrcIdx = 295;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.gl43fmrisv.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 296;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.gl43fmrisv.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 297;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.hujlteqo2z.SwitchingTimeCalculation_PWM
                    section.data(1).logicalSrcIdx = 298;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.hujlteqo2z.SwitchingTimeCalculation_fsw
                    section.data(2).logicalSrcIdx = 299;
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

                    ;% rtB.mtj0qfc1hb
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.nrfpufphvr
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.gcijdhs3n1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.eehr2alozi
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

                    ;% rtB.pur1ybnggo
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 40;

                    ;% rtB.a4enoxc25n
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 46;

                    ;% rtB.eqnxhwykea
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 50;

                    ;% rtB.dnpeo0mlyy
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 54;

                    ;% rtB.fcn2r552dv
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 58;

                    ;% rtB.nmpnlfxsny
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 62;

                    ;% rtB.pb2fck224w
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 66;

                    ;% rtB.jyztzvd3j4
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 70;

                    ;% rtB.cqqbzqbgzr
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 71;

                    ;% rtB.hvlyozxkyc
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 75;

                    ;% rtB.nhs5fzmxh5
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 76;

                    ;% rtB.enr4er5ugn
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 80;

                    ;% rtB.e1d05x53fh
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 81;

                    ;% rtB.byvjh01bgg
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 85;

                    ;% rtB.jripa5e0sa
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 86;

                    ;% rtB.mkbvufs0fh
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 90;

                    ;% rtB.nzubz5zcaw
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 91;

                    ;% rtB.dveoezpzol
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 257;

                    ;% rtB.o44efxocq0
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 275;

                    ;% rtB.jnilobsjko
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 276;

                    ;% rtB.fil4mrutwj
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 277;

                    ;% rtB.kcl20ozfx5
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 278;

                    ;% rtB.m3egez1rs1
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 279;

                    ;% rtB.endb33fl2h
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 280;

                    ;% rtB.hzuydp0342
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 281;

                    ;% rtB.jbpuex4112
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 282;

                    ;% rtB.d2z5yi1abu
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 283;

                    ;% rtB.clygmtjfwh
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 284;

                    ;% rtB.hqskxvv54t
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 285;

                    ;% rtB.ffey2m0ah2
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 286;

                    ;% rtB.polsp5zirz
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 287;

                    ;% rtB.ndti0gtzl3
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 288;

                    ;% rtB.pzqtzfecyw
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 289;

                    ;% rtB.na4tyjngmd
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 291;

                    ;% rtB.fymik4ehbr
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 293;

                    ;% rtB.ffj153gzwx
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 295;

                    ;% rtB.c51pwmznvw
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 297;

                    ;% rtB.femzflyely
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 299;

                    ;% rtB.jyj4ef53mr
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 301;

                    ;% rtB.ex0hed1yyl
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 303;

                    ;% rtB.bxl5szpbbj
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 305;

                    ;% rtB.aobve4fqdo
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 307;

                    ;% rtB.ah4awuzbmi
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 309;

                    ;% rtB.gcqrargtap
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 311;

                    ;% rtB.nelhatsdgn
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 313;

                    ;% rtB.ivyaisc3iw
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 315;

                    ;% rtB.fx0in4qczm
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 317;

                    ;% rtB.b0zpex3nd3
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 319;

                    ;% rtB.dsgoyg1upn
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 321;

                    ;% rtB.kh5quoykke
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 323;

                    ;% rtB.azdyb5jzw2
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 325;

                    ;% rtB.pfeoax4yjp
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 326;

                    ;% rtB.ckmflb5ptc
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 327;

                    ;% rtB.kh1chxh5dg
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 328;

                    ;% rtB.ejiwuxoqfh
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 329;

                    ;% rtB.bz420ozoal
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 330;

                    ;% rtB.fzvssdup2a
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 331;

                    ;% rtB.nim1vqistm
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 332;

                    ;% rtB.hzqxukdt2n
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 333;

                    ;% rtB.k2pix3y1pq
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 336;

                    ;% rtB.gee5ztsvvw
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 337;

                    ;% rtB.bmjrp4i5l2
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 338;

                    ;% rtB.ly0sxsegct
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 339;

                    ;% rtB.hf5edtag1w
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 345;

                    ;% rtB.pdsagbfkyi
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 346;

                    ;% rtB.b3oezmaicg
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 347;

                    ;% rtB.cxextfpyro
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 348;

                    ;% rtB.c4nvx3ktei
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 349;

                    ;% rtB.egc5x2s3e1
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 350;

                    ;% rtB.ltzix1lvi4
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 351;

                    ;% rtB.k3lhsxpimt
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 352;

                    ;% rtB.fddkxm4bda
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 353;

                    ;% rtB.m3enyhsvoz
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 354;

                    ;% rtB.ofnzty1w1l
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 355;

                    ;% rtB.jewqbqieti
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 356;

                    ;% rtB.lqq2v20z4e
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 357;

                    ;% rtB.pqgdmyojvr
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 358;

                    ;% rtB.dhxxrbtiya
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 359;

                    ;% rtB.lkgxgrmcdf
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 360;

                    ;% rtB.ab1tfr0xfv
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 361;

                    ;% rtB.klcm0ofnb2
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 363;

                    ;% rtB.mktfwuvyz0
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 365;

                    ;% rtB.hrf2kbz0fz
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 367;

                    ;% rtB.ncijorklu2
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 369;

                    ;% rtB.csz1erxzbp
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 371;

                    ;% rtB.nohypq1rb4
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 373;

                    ;% rtB.c53six4jge
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 375;

                    ;% rtB.krbnjfnjon
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 377;

                    ;% rtB.gvbz2kxljw
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 379;

                    ;% rtB.deuh5tyk4q
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 381;

                    ;% rtB.d0gifw0q3v
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 383;

                    ;% rtB.ahufcewv41
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 385;

                    ;% rtB.pg2dbtctik
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 387;

                    ;% rtB.evp4c5goee
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 389;

                    ;% rtB.jdgl5035pl
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 391;

                    ;% rtB.n0nnkknxzj
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 393;

                    ;% rtB.bf3cljzk3i
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 395;

                    ;% rtB.lutjprh4lt
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 397;

                    ;% rtB.o0id30im0j
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 398;

                    ;% rtB.hiku2rsz33
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 399;

                    ;% rtB.jqjid2ex0e
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 400;

                    ;% rtB.glxm44mkys
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 401;

                    ;% rtB.eodqn1cxgj
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 402;

                    ;% rtB.od3c3m5uvu
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 403;

                    ;% rtB.bo1uuaes1k
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 404;

                    ;% rtB.bsgqmzut0s
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 405;

                    ;% rtB.lrqp1tp2yx
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 406;

                    ;% rtB.l4aof44tt5
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 409;

                    ;% rtB.dzso2blz3j
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 410;

                    ;% rtB.fdzts3csz1
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 411;

                    ;% rtB.k5e1dud3cs
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 412;

                    ;% rtB.h53otsunu5
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 418;

                    ;% rtB.lyfxv21wwk
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 419;

                    ;% rtB.dsqazdztds
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 420;

                    ;% rtB.f0tw1xremj
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 421;

                    ;% rtB.pyjku12imh
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 422;

                    ;% rtB.hh4tq13ns3
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 423;

                    ;% rtB.jeo2sdv30b
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 424;

                    ;% rtB.g31ndulfdx
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 425;

                    ;% rtB.lvs2nqocrc
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 427;

                    ;% rtB.gnm1oejpr1
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 428;

                    ;% rtB.anrciyr1bu
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 429;

                    ;% rtB.laggjrezxv
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 430;

                    ;% rtB.oekaepqjyv
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 431;

                    ;% rtB.lhdhpkyers
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 432;

                    ;% rtB.dmvf3ba4on
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 433;

                    ;% rtB.o12qoj43ak
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 434;

                    ;% rtB.moxna2fjso
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 435;

                    ;% rtB.dqyaxoax35
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 436;

                    ;% rtB.ooq523rnwd
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 437;

                    ;% rtB.a3jorwwe5p
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 438;

                    ;% rtB.hfcrw40dq2
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 439;

                    ;% rtB.jo3jcfotck
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 443;

                    ;% rtB.nvfkwmhj20
                    section.data(145).logicalSrcIdx = 146;
                    section.data(145).dtTransOffset = 447;

                    ;% rtB.lwun3vmeu5
                    section.data(146).logicalSrcIdx = 147;
                    section.data(146).dtTransOffset = 448;

                    ;% rtB.nacb4b1xou
                    section.data(147).logicalSrcIdx = 150;
                    section.data(147).dtTransOffset = 449;

                    ;% rtB.lnfcgypq4p
                    section.data(148).logicalSrcIdx = 151;
                    section.data(148).dtTransOffset = 450;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.ois3ekjgke
                    section.data(1).logicalSrcIdx = 152;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dknyvaohjv
                    section.data(2).logicalSrcIdx = 153;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.nrde2fmcqk
                    section.data(1).logicalSrcIdx = 156;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hj4zhmy0lq
                    section.data(2).logicalSrcIdx = 159;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.jyzjgf4veo.om1sj125wt
                    section.data(1).logicalSrcIdx = 162;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.dnwyq4zwad.om1sj125wt
                    section.data(1).logicalSrcIdx = 163;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.gl43fmrisv.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 164;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gl43fmrisv.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 165;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.gl43fmrisv.gjl0s33nyr
                    section.data(3).logicalSrcIdx = 166;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.hujlteqo2z.hc1gyegy3f
                    section.data(1).logicalSrcIdx = 167;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hujlteqo2z.kqiv34pn4h
                    section.data(2).logicalSrcIdx = 168;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.hujlteqo2z.gjl0s33nyr
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

                    ;% rtDW.c2pjulqreq
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ldvgcubppo
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.gmmxfl1bw3
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.l4zj40yoiw
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtDW.ff1idcuyj3
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% rtDW.hy1ejh3uja
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtDW.ftitttx1ko
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% rtDW.nwsnu4bedy
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtDW.pf1lum1bqu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 20;

                    ;% rtDW.cs5il4k0w2
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtDW.gq11ipk23p
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 28;

                    ;% rtDW.gsbxdcbtoo
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 30;

                    ;% rtDW.i3dxfx4ud3
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 32;

                    ;% rtDW.gtai5gwlbw
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 34;

                    ;% rtDW.p02z5qbxni
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 36;

                    ;% rtDW.omf1kqumni
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 38;

                    ;% rtDW.o0pnnssinp
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 40;

                    ;% rtDW.hnmxyifoxa
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 41;

                    ;% rtDW.ek2rwpc4pa
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 43;

                    ;% rtDW.pkqxz2ee2e
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 45;

                    ;% rtDW.gdbqjocnxn
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 46;

                    ;% rtDW.dhbbriu3am
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 48;

                    ;% rtDW.mip5knuolb
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 50;

                    ;% rtDW.prhiof4qsq
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 162;

                    ;% rtDW.ecsqxwncwm
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 163;

                    ;% rtDW.nim5l5b0xd
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 164;

                    ;% rtDW.aybtzdp53j
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 165;

                    ;% rtDW.casefabrfq
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 166;

                    ;% rtDW.cnmjwkmazr
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 167;

                    ;% rtDW.brlwrgk15q
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 169;

                    ;% rtDW.o25uswlvdp
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 171;

                    ;% rtDW.medeidy042
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 173;

                    ;% rtDW.cu4avl1hkj
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 6839;

                    ;% rtDW.bsq0dfmaxa
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 6841;

                    ;% rtDW.cezbwb0d2a
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 6843;

                    ;% rtDW.ox4tevucxv
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 6845;

                    ;% rtDW.g31vxfpy4q
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 13511;

                    ;% rtDW.db5bwiekun
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 13513;

                    ;% rtDW.ls4rxzkes5
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 13515;

                    ;% rtDW.bdgovhv4ik
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 13517;

                    ;% rtDW.eiw52ywrb4
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 20183;

                    ;% rtDW.hpqftlxp3c
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 20185;

                    ;% rtDW.dk0rvfsmaq
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 20187;

                    ;% rtDW.kc40jaqb2h
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 20189;

                    ;% rtDW.a1sr2wqgmu
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 26855;

                    ;% rtDW.g4ja2dajvk
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 26857;

                    ;% rtDW.luujgxmr1o
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 26859;

                    ;% rtDW.e3gek0ry3d
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 26861;

                    ;% rtDW.nvwrcwhvfh
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 33527;

                    ;% rtDW.f0gipvq3m1
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 33529;

                    ;% rtDW.kwtkfmor5n
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 33531;

                    ;% rtDW.j1x1hsbdr0
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 33533;

                    ;% rtDW.n5nzu3kjes
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 40199;

                    ;% rtDW.cpdftgvp5j
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 40200;

                    ;% rtDW.aytq4ro10u
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 40201;

                    ;% rtDW.hon4sukebl
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 40202;

                    ;% rtDW.buoynvge5k
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 40205;

                    ;% rtDW.ibybqspfgl
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 40206;

                    ;% rtDW.jsd0tjjonc
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 40207;

                    ;% rtDW.lqb3ywvxey
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 40208;

                    ;% rtDW.ho4bknelcg
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 40209;

                    ;% rtDW.itoao1sfit
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 40210;

                    ;% rtDW.c4lxq5nxdk
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 40212;

                    ;% rtDW.i31qdzmytg
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 40214;

                    ;% rtDW.ijyhgxa4ir
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 40216;

                    ;% rtDW.ikmihxdjgd
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 46882;

                    ;% rtDW.beyirrck3l
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 46884;

                    ;% rtDW.opjnplgrqr
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 46886;

                    ;% rtDW.bzfzyz3bd1
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 46888;

                    ;% rtDW.fhoxjffvpi
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 53554;

                    ;% rtDW.kibzgbc1sz
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 53556;

                    ;% rtDW.cylq3fvmgt
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 53558;

                    ;% rtDW.ezchfr4o4l
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 53560;

                    ;% rtDW.brhp0ikhtk
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 60226;

                    ;% rtDW.cx4aeyf40y
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 60228;

                    ;% rtDW.fndyh2xhdu
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 60230;

                    ;% rtDW.eftulqbrzz
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 60232;

                    ;% rtDW.m0cw303eqj
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 66898;

                    ;% rtDW.hlb4yuxrtw
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 66900;

                    ;% rtDW.plzxjtiyrv
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 66902;

                    ;% rtDW.jookwiu0tz
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 66904;

                    ;% rtDW.gwf111r5cb
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 73570;

                    ;% rtDW.ga5s5ik0xv
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 73572;

                    ;% rtDW.jqooyst0rm
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 73574;

                    ;% rtDW.d3ckza5q5a
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 73576;

                    ;% rtDW.a51ghepnze
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 80242;

                    ;% rtDW.hqs2mw0ghn
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 80243;

                    ;% rtDW.eh404m514p
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 80244;

                    ;% rtDW.dhijvgbrcb
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 80245;

                    ;% rtDW.e1h3pdnle0
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 80248;

                    ;% rtDW.fahmpvykdf
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 80249;

                    ;% rtDW.fhiibidmhv
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 80250;

                    ;% rtDW.hohmgcvl5b
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 80251;

                    ;% rtDW.aztl5dgba1
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 80252;

                    ;% rtDW.elswac3jyk
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 80253;

                    ;% rtDW.iml3sujeru
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 80254;

                    ;% rtDW.k5zonezswp
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 80255;

                    ;% rtDW.avrp3pl50n
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 80256;

                    ;% rtDW.nhad53qhlh
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 80257;

                    ;% rtDW.bmdokcjl2s
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 80260;

                    ;% rtDW.hpygl3vduj
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 80263;

                    ;% rtDW.e1yo12tosu
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 80264;

                    ;% rtDW.ptavdiqfuy
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 80265;

                    ;% rtDW.exod2jkl51
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 80266;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 40;
            section.data(40)  = dumData; %prealloc

                    ;% rtDW.pdwd2qqxba
                    section.data(1).logicalSrcIdx = 104;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.d3svesmau2
                    section.data(2).logicalSrcIdx = 105;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ctpmr0qy2w
                    section.data(3).logicalSrcIdx = 106;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gn4tdbf40k
                    section.data(4).logicalSrcIdx = 107;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jnvtrrqjab
                    section.data(5).logicalSrcIdx = 108;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ihbnz3xv44
                    section.data(6).logicalSrcIdx = 109;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dewjhbtsof
                    section.data(7).logicalSrcIdx = 110;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.czyrktcsyd
                    section.data(8).logicalSrcIdx = 111;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.fyx05x0zdv
                    section.data(9).logicalSrcIdx = 112;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eyk03rsw5y
                    section.data(10).logicalSrcIdx = 113;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.bvobfiadqb
                    section.data(11).logicalSrcIdx = 114;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.jr4kkfwx0e
                    section.data(12).logicalSrcIdx = 115;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.k12qk4zsfm
                    section.data(13).logicalSrcIdx = 116;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.aw3nmy5ew5.LoggedData
                    section.data(14).logicalSrcIdx = 117;
                    section.data(14).dtTransOffset = 15;

                    ;% rtDW.cnspotbbsa.TimePtr
                    section.data(15).logicalSrcIdx = 118;
                    section.data(15).dtTransOffset = 17;

                    ;% rtDW.ckxcz3qb0c.TimePtr
                    section.data(16).logicalSrcIdx = 119;
                    section.data(16).dtTransOffset = 18;

                    ;% rtDW.bjxv1rvheo
                    section.data(17).logicalSrcIdx = 120;
                    section.data(17).dtTransOffset = 19;

                    ;% rtDW.buyuofckyi
                    section.data(18).logicalSrcIdx = 121;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.nkgor1datg.TimePtr
                    section.data(19).logicalSrcIdx = 122;
                    section.data(19).dtTransOffset = 23;

                    ;% rtDW.al5kuxfjwn.LoggedData
                    section.data(20).logicalSrcIdx = 123;
                    section.data(20).dtTransOffset = 24;

                    ;% rtDW.hxvgeow341.LoggedData
                    section.data(21).logicalSrcIdx = 124;
                    section.data(21).dtTransOffset = 25;

                    ;% rtDW.pwtoor2sjt.TimePtr
                    section.data(22).logicalSrcIdx = 125;
                    section.data(22).dtTransOffset = 27;

                    ;% rtDW.bsgf2ryqdu.LoggedData
                    section.data(23).logicalSrcIdx = 126;
                    section.data(23).dtTransOffset = 28;

                    ;% rtDW.k03x2e2zwo.AQHandles
                    section.data(24).logicalSrcIdx = 127;
                    section.data(24).dtTransOffset = 32;

                    ;% rtDW.b1iol10x4w.AQHandles
                    section.data(25).logicalSrcIdx = 128;
                    section.data(25).dtTransOffset = 33;

                    ;% rtDW.pru2b1vufe.AQHandles
                    section.data(26).logicalSrcIdx = 129;
                    section.data(26).dtTransOffset = 34;

                    ;% rtDW.iiuqq1u2xy.AQHandles
                    section.data(27).logicalSrcIdx = 130;
                    section.data(27).dtTransOffset = 35;

                    ;% rtDW.ajopsahum1.LoggedData
                    section.data(28).logicalSrcIdx = 131;
                    section.data(28).dtTransOffset = 36;

                    ;% rtDW.elrlc2i1p2.AQHandles
                    section.data(29).logicalSrcIdx = 132;
                    section.data(29).dtTransOffset = 38;

                    ;% rtDW.ht2kgpwizw.AQHandles
                    section.data(30).logicalSrcIdx = 133;
                    section.data(30).dtTransOffset = 39;

                    ;% rtDW.hb0mah0exy.AQHandles
                    section.data(31).logicalSrcIdx = 134;
                    section.data(31).dtTransOffset = 40;

                    ;% rtDW.gvx2zg2cea.AQHandles
                    section.data(32).logicalSrcIdx = 135;
                    section.data(32).dtTransOffset = 41;

                    ;% rtDW.nuyoxo0cqz.AQHandles
                    section.data(33).logicalSrcIdx = 136;
                    section.data(33).dtTransOffset = 42;

                    ;% rtDW.gww0cv0ikt.LoggedData
                    section.data(34).logicalSrcIdx = 137;
                    section.data(34).dtTransOffset = 43;

                    ;% rtDW.bsvedga4ar.LoggedData
                    section.data(35).logicalSrcIdx = 138;
                    section.data(35).dtTransOffset = 46;

                    ;% rtDW.g2zj3hehp4.AQHandles
                    section.data(36).logicalSrcIdx = 139;
                    section.data(36).dtTransOffset = 48;

                    ;% rtDW.c4ulfwrxhx.AQHandles
                    section.data(37).logicalSrcIdx = 140;
                    section.data(37).dtTransOffset = 49;

                    ;% rtDW.jq1p4omjox.AQHandles
                    section.data(38).logicalSrcIdx = 141;
                    section.data(38).dtTransOffset = 50;

                    ;% rtDW.po2vncqjoh.AQHandles
                    section.data(39).logicalSrcIdx = 142;
                    section.data(39).dtTransOffset = 51;

                    ;% rtDW.gkz0y4hq2m.LoggedData
                    section.data(40).logicalSrcIdx = 143;
                    section.data(40).dtTransOffset = 52;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.evl1v4iore
                    section.data(1).logicalSrcIdx = 144;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nkjbdq4ryd
                    section.data(2).logicalSrcIdx = 145;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.lykadcxjo0
                    section.data(1).logicalSrcIdx = 146;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kksigz1kjz
                    section.data(2).logicalSrcIdx = 147;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtDW.g0ey1umlvp
                    section.data(1).logicalSrcIdx = 148;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.aoolzur04j
                    section.data(2).logicalSrcIdx = 149;
                    section.data(2).dtTransOffset = 54;

                    ;% rtDW.fdcsxjj0tt
                    section.data(3).logicalSrcIdx = 150;
                    section.data(3).dtTransOffset = 55;

                    ;% rtDW.ka1dja1it3
                    section.data(4).logicalSrcIdx = 151;
                    section.data(4).dtTransOffset = 60;

                    ;% rtDW.bgeyshjbzb.PrevIndex
                    section.data(5).logicalSrcIdx = 152;
                    section.data(5).dtTransOffset = 65;

                    ;% rtDW.mjve5455le.PrevIndex
                    section.data(6).logicalSrcIdx = 153;
                    section.data(6).dtTransOffset = 66;

                    ;% rtDW.ey2v3oako3
                    section.data(7).logicalSrcIdx = 154;
                    section.data(7).dtTransOffset = 67;

                    ;% rtDW.hvxmf3zuqp
                    section.data(8).logicalSrcIdx = 155;
                    section.data(8).dtTransOffset = 72;

                    ;% rtDW.k1540yevzf.PrevIndex
                    section.data(9).logicalSrcIdx = 156;
                    section.data(9).dtTransOffset = 77;

                    ;% rtDW.blyhnqcwbl.PrevIndex
                    section.data(10).logicalSrcIdx = 157;
                    section.data(10).dtTransOffset = 78;

                    ;% rtDW.cplapuxul1
                    section.data(11).logicalSrcIdx = 158;
                    section.data(11).dtTransOffset = 79;

                    ;% rtDW.etyndqvhof
                    section.data(12).logicalSrcIdx = 159;
                    section.data(12).dtTransOffset = 80;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.ivsks1bx0l
                    section.data(1).logicalSrcIdx = 160;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kqwgkvrpbx
                    section.data(2).logicalSrcIdx = 161;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mrclia2nhj
                    section.data(3).logicalSrcIdx = 162;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.mkfm1nwa4k
                    section.data(4).logicalSrcIdx = 163;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.dfhxi1pprk
                    section.data(5).logicalSrcIdx = 164;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.goxydkgp3m
                    section.data(6).logicalSrcIdx = 165;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 28;
            section.data(28)  = dumData; %prealloc

                    ;% rtDW.pesmq01kos
                    section.data(1).logicalSrcIdx = 166;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ad2rr00kcq
                    section.data(2).logicalSrcIdx = 167;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mfooylrov2
                    section.data(3).logicalSrcIdx = 168;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.a0ow33ilzk
                    section.data(4).logicalSrcIdx = 169;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bkwrvqxkf1
                    section.data(5).logicalSrcIdx = 170;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.j50udee3q4
                    section.data(6).logicalSrcIdx = 171;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.irp0xx4avl
                    section.data(7).logicalSrcIdx = 172;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.p5powm1gdp
                    section.data(8).logicalSrcIdx = 173;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.puogz2oxpb
                    section.data(9).logicalSrcIdx = 174;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.h4yemslxzv
                    section.data(10).logicalSrcIdx = 175;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ib045naqql
                    section.data(11).logicalSrcIdx = 176;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.htly4042cc
                    section.data(12).logicalSrcIdx = 177;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.lmniz4owhh
                    section.data(13).logicalSrcIdx = 178;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hwjumjs5x1
                    section.data(14).logicalSrcIdx = 179;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.e4kyxoj0nc
                    section.data(15).logicalSrcIdx = 180;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.nihpeweagh
                    section.data(16).logicalSrcIdx = 181;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.moyclcqaxp
                    section.data(17).logicalSrcIdx = 182;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.baseatbrhl
                    section.data(18).logicalSrcIdx = 183;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.o5sglifuzn
                    section.data(19).logicalSrcIdx = 184;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.iphlqctr2v
                    section.data(20).logicalSrcIdx = 185;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.pwkdcusirn
                    section.data(21).logicalSrcIdx = 186;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.dzmkslhpoi
                    section.data(22).logicalSrcIdx = 187;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.lc0mv3azov
                    section.data(23).logicalSrcIdx = 188;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.j4reyhjks0
                    section.data(24).logicalSrcIdx = 189;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.mxcgazvi0e
                    section.data(25).logicalSrcIdx = 190;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.iwne4nroqk
                    section.data(26).logicalSrcIdx = 191;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.juff0j4zxc
                    section.data(27).logicalSrcIdx = 192;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.hdnm0in5gu
                    section.data(28).logicalSrcIdx = 193;
                    section.data(28).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.hd1wmr0d1r
                    section.data(1).logicalSrcIdx = 194;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jdpempr5r1
                    section.data(2).logicalSrcIdx = 195;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.csrr5dodrz
                    section.data(3).logicalSrcIdx = 196;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jdkwfeajym
                    section.data(4).logicalSrcIdx = 197;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ibt15oxvor
                    section.data(5).logicalSrcIdx = 198;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.cwc1wqm0vk
                    section.data(6).logicalSrcIdx = 199;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.mbinizmvii
                    section.data(7).logicalSrcIdx = 200;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.lwuyrwvpiz
                    section.data(8).logicalSrcIdx = 201;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.p0iycn1rso
                    section.data(9).logicalSrcIdx = 202;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.muorklbp1c
                    section.data(10).logicalSrcIdx = 203;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.m13d2twz41
                    section.data(11).logicalSrcIdx = 204;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.hqef4lwy1a
                    section.data(12).logicalSrcIdx = 205;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.ck2irrfdg1
                    section.data(13).logicalSrcIdx = 206;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.jyzjgf4veo.gwsozz21xa
                    section.data(1).logicalSrcIdx = 207;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jyzjgf4veo.fz2vuipvug
                    section.data(2).logicalSrcIdx = 208;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jyzjgf4veo.mn3x5l1iyv
                    section.data(3).logicalSrcIdx = 209;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jyzjgf4veo.jnzyynoydb
                    section.data(1).logicalSrcIdx = 210;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.jyzjgf4veo.gubhsqnfba
                    section.data(1).logicalSrcIdx = 211;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jyzjgf4veo.dor3umtfyw
                    section.data(2).logicalSrcIdx = 212;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jyzjgf4veo.noduoxzhbp
                    section.data(3).logicalSrcIdx = 213;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jyzjgf4veo.jmjac22ve4
                    section.data(4).logicalSrcIdx = 214;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.dnwyq4zwad.gwsozz21xa
                    section.data(1).logicalSrcIdx = 215;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dnwyq4zwad.fz2vuipvug
                    section.data(2).logicalSrcIdx = 216;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dnwyq4zwad.mn3x5l1iyv
                    section.data(3).logicalSrcIdx = 217;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dnwyq4zwad.jnzyynoydb
                    section.data(1).logicalSrcIdx = 218;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.dnwyq4zwad.gubhsqnfba
                    section.data(1).logicalSrcIdx = 219;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dnwyq4zwad.dor3umtfyw
                    section.data(2).logicalSrcIdx = 220;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dnwyq4zwad.noduoxzhbp
                    section.data(3).logicalSrcIdx = 221;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dnwyq4zwad.jmjac22ve4
                    section.data(4).logicalSrcIdx = 222;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gl43fmrisv.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 223;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gl43fmrisv.ovi3mu0twa
                    section.data(1).logicalSrcIdx = 224;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hujlteqo2z.ihi2jstbs2
                    section.data(1).logicalSrcIdx = 225;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hujlteqo2z.ovi3mu0twa
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


    targMap.checksum0 = 2011790292;
    targMap.checksum1 = 851545788;
    targMap.checksum2 = 1234982481;
    targMap.checksum3 = 513022868;

