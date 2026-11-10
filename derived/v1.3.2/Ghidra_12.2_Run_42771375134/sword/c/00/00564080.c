/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00564080; name: FUN_00564080
 */


int FUN_00564080(long *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_480;
  long local_478 [128];
  int local_78 [2];
  undefined8 local_70;
  
  puVar3 = PTR_DAT_02713978;
  puVar2 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: ",0xb21);
    FUN_00517ae0("==== TEXSHADERSET::CreateEffect() ====\n");
  }
  puVar4 = PTR_DAT_02713c60;
  if (*param_1 == 0) {
    local_480 = 0;
    plVar11 = param_1 + 0x5344;
    iVar5 = *(int *)PTR_DAT_02713c60;
    lVar12 = (long)iVar5;
    if (*plVar11 != 0) {
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*plVar11 + -8);
    }
    plVar7 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar12 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0xb6d,0);
    plVar8 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      *plVar7 = lVar12;
    }
    *plVar11 = (long)plVar8;
    local_478[0] = lVar12;
    FUN_00561c90(plVar8,local_478,puVar4 + 4,0x318b62);
    iVar5 = FUN_0059a3b0(param_2,*plVar11,iVar5,0,param_1,&local_480,1);
    puVar4 = PTR_DAT_02713980;
    iVar10 = *(int *)puVar2;
    if (-1 < iVar5) {
      iVar5 = *(int *)puVar3;
      if ((iVar10 != 0) && (iVar5 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: ",0xba0);
        FUN_00517ae0("TEXSHADERSET::CreateEffect(): IGPUEffect::CreateEffectFromFile() succeeded.\n"
                    );
        iVar10 = *(int *)puVar2;
        iVar5 = *(int *)puVar3;
      }
      if ((iVar10 != 0) && (iVar5 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: ",0xbaa);
        FUN_00517ae0("TEXSHADERSET::CreateEffect(): get parameter handles ...\n");
      }
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fParam_ScreenSpaceScale");
      *(undefined4 *)(param_1 + 0x14) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fParam_PerspectiveFactor")
      ;
      *(undefined4 *)((long)param_1 + 0xa4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_DepthOfFieldConvertDepthFactor");
      *(undefined4 *)(param_1 + 0x15) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fParam_FocusDistance");
      *(undefined4 *)((long)param_1 + 0xac) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_DepthOfFieldFactorScaleOffset");
      *(undefined4 *)(param_1 + 0x16) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"afXY_DepthOfFieldLevelBlendFactor16");
      *(undefined4 *)((long)param_1 + 0xb4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_DepthOfFieldLayerMaskThreshold");
      *(undefined4 *)(param_1 + 0x17) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_DepthOfFieldFactorThreshold");
      *(undefined4 *)((long)param_1 + 0xbc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_DepthCastScaleOffset");
      *(undefined4 *)(param_1 + 0x18) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"afUV_TexCoordOffsetV16");
      *(undefined4 *)((long)param_1 + 0xc4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"afUV_TexCoordOffsetP32");
      *(undefined4 *)(param_1 + 0x19) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"afParam_TexCoordScaler8");
      *(undefined4 *)((long)param_1 + 0xcc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"afRGBA_Modulate");
      *(undefined4 *)(param_1 + 0x1a) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"afRGBA_Offset");
      *(undefined4 *)((long)param_1 + 0xd4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fRGBA_Constant");
      *(undefined4 *)(param_1 + 0x1b) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"afRGBA_Constant");
      *(undefined4 *)((long)param_1 + 0xdc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"afUVWQ_TexCoordScaleOffset");
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fParam_VignetteSimulate");
      *(undefined4 *)((long)param_1 + 0xe4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_VignettePowerOfCosine");
      *(undefined4 *)(param_1 + 0x1d) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_HDRFormatFactor_LOGRGB");
      *(undefined4 *)((long)param_1 + 0xec) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_HDRFormatFactor_RGBALUM");
      *(undefined4 *)(param_1 + 0x1e) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_HDRFormatFactor_REINHARDRGB");
      *(undefined4 *)((long)param_1 + 0xf4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_BrightPass_LensDistortion");
      *(undefined4 *)(param_1 + 0x1f) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fParam_GammaCorrection");
      *(undefined4 *)((long)param_1 + 0xfc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"fParam_DitherOffsetScale")
      ;
      *(undefined4 *)(param_1 + 0x20) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"fParam_TonemapMaxMappingLuminance");
      *(undefined4 *)((long)param_1 + 0x104) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"m44_ColorTransformMatrix")
      ;
      *(undefined4 *)(param_1 + 0x21) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"m44_PreTonemapColorTransformMatrix");
      *(undefined4 *)((long)param_1 + 0x10c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                        ((long *)*param_1,0,"m44_PreTonemapGlareColorTransformMatrix");
      *(undefined4 *)(param_1 + 0x22) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0,"am44_TransformMatrix");
      *(undefined4 *)((long)param_1 + 0x114) = uVar6;
      FUN_00550fe0(local_78,"tech_MadT1_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      plVar11 = param_1 + 0x23;
      lVar12 = -0x20;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar12 + 0x21));
        FUN_00563090(param_1,plVar11,local_478);
        plVar11 = plVar11 + 0xb;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadScalarWeightT1_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      plVar11 = param_1 + 0x183;
      lVar12 = -0x20;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar12 + 0x21));
        FUN_00563090(param_1,plVar11,local_478);
        plVar11 = plVar11 + 0xb;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadAlphaT1_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      plVar11 = param_1 + 0x2e3;
      lVar12 = -0x20;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar12 + 0x21));
        FUN_00563090(param_1,plVar11,local_478);
        plVar11 = plVar11 + 0xb;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadT2_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      plVar11 = param_1 + 0x443;
      lVar12 = -0x20;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar12 + 0x21));
        FUN_00563090(param_1,plVar11,local_478);
        plVar11 = plVar11 + 0xb;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadColorGradingLutT1_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xe95,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0xea0,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0xeab,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0xeb6,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadAlphaColorT2_R_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x5a3,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadAlphaColorT2_G_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x653,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadAlphaColorT2_B_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x703,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadAlphaColorT2_A_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x7b3,local_478);
      FUN_00551380(local_78);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_Alpha_R");
      *(undefined4 *)(param_1 + 0x863) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_Alpha_G");
      *(undefined4 *)((long)param_1 + 0x431c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_Alpha_B");
      *(undefined4 *)(param_1 + 0x864) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_Alpha_A");
      *(undefined4 *)((long)param_1 + 0x4324) = uVar6;
      FUN_00550fe0(local_78,"tech_TexCoordOffsetMadTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x865,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0x870,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0x87b,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0x886,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0x891,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0x89c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0x8a7,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0x8b2,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0x8bd,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0x8c8,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0x8d3,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0x8de,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0x8e9,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0x8f4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0x8ff,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0x90a,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x915,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0x920,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0x92b,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0x936,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0x941,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0x94c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0x957,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0x962,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0x96d,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0x978,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0x983,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0x98e,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0x999,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0x9a4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0x9af,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0x9ba,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadLumGammaTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0x9c5,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0x9d0,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0x9db,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0x9e6,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0x9f1,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0x9fc,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0xa07,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0xa12,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0xa1d,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0xa28,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0xa33,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0xa3e,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0xa49,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0xa54,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0xa5f,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0xa6a,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadLumGammaWithLensDirtTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xa75,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0xa80,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0xa8b,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0xa96,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0xaa1,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0xaac,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0xab7,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0xac2,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0xacd,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0xad8,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0xae3,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0xaee,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0xaf9,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0xb04,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0xb0f,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0xb1a,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadOffsetTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xb25,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0xb30,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0xb3b,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0xb46,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0xb51,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0xb5c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0xb67,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0xb72,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0xb7d,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0xb88,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0xb93,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0xb9e,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0xba9,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0xbb4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0xbbf,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0xbca,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MaxColorTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xd35,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0xd40,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0xd4b,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0xd56,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0xd61,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0xd6c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0xd77,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0xd82,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0xd8d,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0xd98,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0xda3,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0xdae,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0xdb9,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0xdc4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0xdcf,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0xdda,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MaxColorLumGammaTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xde5,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,param_1 + 0xdf0,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,param_1 + 0xdfb,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,param_1 + 0xe06,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,param_1 + 0xe11,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,param_1 + 0xe1c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,param_1 + 0xe27,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,param_1 + 0xe32,local_478);
      sprintf((char *)local_478,"%s%d",local_70,9);
      FUN_00563090(param_1,param_1 + 0xe3d,local_478);
      sprintf((char *)local_478,"%s%d",local_70,10);
      FUN_00563090(param_1,param_1 + 0xe48,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xb);
      FUN_00563090(param_1,param_1 + 0xe53,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xc);
      FUN_00563090(param_1,param_1 + 0xe5e,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xd);
      FUN_00563090(param_1,param_1 + 0xe69,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xe);
      FUN_00563090(param_1,param_1 + 0xe74,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0xf);
      FUN_00563090(param_1,param_1 + 0xe7f,local_478);
      sprintf((char *)local_478,"%s%d",local_70,0x10);
      FUN_00563090(param_1,param_1 + 0xe8a,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadOffsetVignetteTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xbd5,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_MadOffsetVignetteSimulateTn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xc85,local_478);
      FUN_00551380(local_78);
      FUN_005632d0(param_1,(long)param_1 + 0x1b3f4,"tech_TransformMadT1_Sn",8);
      FUN_005632d0(param_1,(long)param_1 + 0x1b414,"tech_TexCoordMadT1_Sn",4);
      FUN_00550fe0(local_78,"tech_BrightPassT1_THRESHOLD_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xee2,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_THRESHOLD_LUMINANCE_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xf03,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_THRESHOLD_LUMINANCE_REMAP_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xf24,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_Vignette_THRESHOLD_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xeed,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_Vignette_THRESHOLD_LUMINANCE_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xf0e,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_Vignette_THRESHOLD_LUMINANCE_REMAP_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xf2f,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_VignetteSimulate_THRESHOLD_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xef8,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_VignetteSimulate_THRESHOLD_LUMINANCE_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xf19,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_BrightPassT1_VignetteSimulate_THRESHOLD_LUMINANCE_REMAP_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,param_1 + 0xf3a,local_478);
      FUN_00551380(local_78);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_LightShaftMask");
      *(undefined4 *)(param_1 + 0xf45) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_LightShaftMask_SM3");
      *(undefined4 *)((long)param_1 + 0x7a2c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_Corona");
      *(undefined4 *)(param_1 + 0xf46) = uVar6;
      FUN_00563090(param_1,(long)param_1 + 0x7a34,"tech_GlareGhost_PointSymmetryT4_S8_TrimT1_S8");
      FUN_00563090(param_1,(long)param_1 + 0x7a8c,
                   "tech_GlareGhost_PointSymmetryDistScaleT4_S8_TrimT1_S8");
      FUN_00563090(param_1,(long)param_1 + 0x7ae4,"tech_GlareGhost_PointSymmetryT3_S8");
      FUN_00563090(param_1,(long)param_1 + 0x7b3c,"tech_LightGhostLuminance");
      FUN_00563090(param_1,(long)param_1 + 0x7b94,"tech_LightGhostLuminance_Depth");
      FUN_00563090(param_1,(long)param_1 + 0x7bec,"tech_LightGhost_N5");
      FUN_00563090(param_1,(long)param_1 + 0x7c44,"tech_LightGhost_N6");
      FUN_00563090(param_1,(long)param_1 + 0x7c9c,"tech_LightGhost_N7");
      FUN_00563090(param_1,(long)param_1 + 0x7cf4,"tech_LightGhost_N8");
      FUN_00550fe0(local_78,"tech_DepthOfField_CompositeBlurredLevels_Tn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,(long)param_1 + 0x7eac,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,(long)param_1 + 0x7f04,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,(long)param_1 + 0x7f5c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,(long)param_1 + 0x7fb4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,(long)param_1 + 0x800c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,(long)param_1 + 0x8064,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,(long)param_1 + 0x80bc,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,(long)param_1 + 0x8114,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_DepthOfField_CompositeBlurredLevels_USNORM_Tn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,(long)param_1 + 0x816c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,(long)param_1 + 0x81c4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,(long)param_1 + 0x821c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,(long)param_1 + 0x8274,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,(long)param_1 + 0x82cc,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,(long)param_1 + 0x8324,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,(long)param_1 + 0x837c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,(long)param_1 + 0x83d4,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_DepthOfField_CompositeBlurredLevelsFrontBlur_Tn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,(long)param_1 + 0x842c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,(long)param_1 + 0x8484,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,(long)param_1 + 0x84dc,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,(long)param_1 + 0x8534,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,(long)param_1 + 0x858c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,(long)param_1 + 0x85e4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,(long)param_1 + 0x863c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,(long)param_1 + 0x8694,local_478);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_DepthOfField_CompositeBlurredLevelsFrontBlur_USNORM_Tn");
      FUN_005515e0(local_78,local_78[0] + -1);
      sprintf((char *)local_478,"%s%d",local_70,1);
      FUN_00563090(param_1,(long)param_1 + 0x86ec,local_478);
      sprintf((char *)local_478,"%s%d",local_70,2);
      FUN_00563090(param_1,(long)param_1 + 0x8744,local_478);
      sprintf((char *)local_478,"%s%d",local_70,3);
      FUN_00563090(param_1,(long)param_1 + 0x879c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,4);
      FUN_00563090(param_1,(long)param_1 + 0x87f4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,5);
      FUN_00563090(param_1,(long)param_1 + 0x884c,local_478);
      sprintf((char *)local_478,"%s%d",local_70,6);
      FUN_00563090(param_1,(long)param_1 + 0x88a4,local_478);
      sprintf((char *)local_478,"%s%d",local_70,7);
      FUN_00563090(param_1,(long)param_1 + 0x88fc,local_478);
      sprintf((char *)local_478,"%s%d",local_70,8);
      FUN_00563090(param_1,(long)param_1 + 0x8954,local_478);
      FUN_00551380(local_78);
      FUN_005633f0(param_1,(long)param_1 + 0x89ac,
                   "tech_DepthOfField_CompositeBlurLevelsFrontBlur_TSn_n");
      FUN_005633f0(param_1,(long)param_1 + 0x9fac,
                   "tech_DepthOfField_CompositeBlurLevelsFrontBlur_USNORM_TSn_n");
      FUN_005633f0(param_1,(long)param_1 + 0xb5ac,
                   "tech_DepthOfField_CompositeMaskedBlurLevels_TSn_n");
      FUN_005633f0(param_1,(long)param_1 + 0xcbac,
                   "tech_DepthOfField_CompositeMaskedBlurLevels_USNORM_TSn_n");
      FUN_00550fe0(local_78,"tech_DepthOfField_BackgroundLayerMaskT1_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      lVar12 = (long)param_1 + 0xe1ac;
      lVar13 = -0x19;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar13 + 0x1a));
        FUN_00563090(param_1,lVar12,local_478);
        lVar12 = lVar12 + 0x58;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_DepthOfField_BackgroundLayerMaskT1_USNORM_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      lVar12 = (long)param_1 + 0xea44;
      lVar13 = -0x19;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar13 + 0x1a));
        FUN_00563090(param_1,lVar12,local_478);
        lVar12 = lVar12 + 0x58;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_DepthOfField_ForegroundLayerMaskT1_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      lVar12 = (long)param_1 + 0xf2dc;
      lVar13 = -0x19;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar13 + 0x1a));
        FUN_00563090(param_1,lVar12,local_478);
        lVar12 = lVar12 + 0x58;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0);
      FUN_00551380(local_78);
      FUN_00550fe0(local_78,"tech_DepthOfField_ForegroundLayerMaskT1_USNORM_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      lVar12 = (long)param_1 + 0xfb74;
      lVar13 = -0x19;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar13 + 0x1a));
        FUN_00563090(param_1,lVar12,local_478);
        lVar12 = lVar12 + 0x58;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0);
      FUN_00551380(local_78);
      FUN_005632d0(param_1,(long)param_1 + 0x1040c,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorT1_Sn",0x11);
      FUN_005632d0(param_1,param_1 + 0x2092,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorT1_USNORM_Sn",0x11);
      FUN_005632d0(param_1,(long)param_1 + 0x1061c,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorT1_Sn",0x11);
      FUN_005632d0(param_1,param_1 + 0x20d4,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorT1_USNORM_Sn",0x11);
      FUN_005632d0(param_1,(long)param_1 + 0x1082c,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorMaskT1_Sn",0x11);
      FUN_005632d0(param_1,param_1 + 0x2116,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorMaskT1_USNORM_Sn",0x11);
      FUN_005632d0(param_1,(long)param_1 + 0x10a3c,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorMaskT1_Sn",0x11);
      FUN_005632d0(param_1,param_1 + 0x2158,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorMaskT1_USNORM_Sn",0x11);
      FUN_005632d0(param_1,(long)param_1 + 0x10514,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorDenseT1_Sn",0x21);
      FUN_005632d0(param_1,param_1 + 0x20b3,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorDenseT1_USNORM_Sn",0x21);
      FUN_005632d0(param_1,(long)param_1 + 0x10724,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorDenseT1_Sn",0x21);
      FUN_005632d0(param_1,param_1 + 0x20f5,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorDenseT1_USNORM_Sn",0x21);
      FUN_005632d0(param_1,(long)param_1 + 0x10934,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorDenseMaskT1_Sn",0x21);
      FUN_005632d0(param_1,param_1 + 0x2137,
                   "tech_DepthOfField_BackgroundLayerMaskMakeColorDenseMaskT1_USNORM_Sn",0x21);
      FUN_005632d0(param_1,(long)param_1 + 0x10b44,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorDenseMaskT1_Sn",0x21);
      FUN_005632d0(param_1,param_1 + 0x2179,
                   "tech_DepthOfField_ForegroundLayerMaskMakeColorDenseMaskT1_USNORM_Sn",0x21);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_ValidatePixel");
      *(undefined4 *)((long)param_1 + 0x7da4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_ValidatePixelEx");
      *(undefined4 *)(param_1 + 0xfb5) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_MedianFilter_Separablex3x3");
      *(undefined4 *)((long)param_1 + 0x7dac) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_GenerateNormalDepth_NormRGB");
      *(undefined4 *)(param_1 + 0xfb8) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_GenerateNormalDepth_NormGen2D");
      *(undefined4 *)(param_1 + 0xfb6) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_GenerateNormalDepth_NormGen2DMan");
      *(undefined4 *)((long)param_1 + 0x7db4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_GenerateNormalDepth_NormGen3D");
      *(undefined4 *)(param_1 + 0xfb7) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_GenerateNormalDepth_NormGen3DMan");
      *(undefined4 *)((long)param_1 + 0x7dbc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_DownsampleNormalDepth")
      ;
      lVar12 = -6;
      lVar13 = 0x7e10;
      *(undefined4 *)((long)param_1 + 0x7dc4) = uVar6;
      do {
        iVar5 = (int)lVar12 + 9;
        iVar5 = iVar5 * iVar5;
        sprintf((char *)local_478,"tech_AlchemySsao_T1_S%d",iVar5);
        uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
        puVar1 = (undefined4 *)((long)param_1 + lVar13);
        puVar1[-0x12] = uVar6;
        sprintf((char *)local_478,"tech_AlchemySsao_Falloff_T1_S%d",iVar5);
        uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
        puVar1[-0xc] = uVar6;
        sprintf((char *)local_478,"tech_AlchemySsaoIgn_T1_S%d",iVar5);
        uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
        puVar1[-6] = uVar6;
        sprintf((char *)local_478,"tech_AlchemySsaoIgn_Falloff_T1_S%d",iVar5);
        uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 4;
        *puVar1 = uVar6;
      } while (lVar12 != 0);
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",5);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)(param_1 + 0xfc5) = uVar6;
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",7);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)((long)param_1 + 0x7e2c) = uVar6;
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",9);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)(param_1 + 0xfc6) = uVar6;
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",0xb);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)((long)param_1 + 0x7e34) = uVar6;
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",0xd);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)(param_1 + 0xfc7) = uVar6;
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",0xf);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)((long)param_1 + 0x7e3c) = uVar6;
      sprintf((char *)local_478,"tech_CrossBilateralForSsao_S%d",0x11);
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_478);
      *(undefined4 *)(param_1 + 0xfc8) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_UpsampleSsao_IM");
      *(undefined4 *)(param_1 + 0xfc9) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_UpsampleSsao");
      *(undefined4 *)((long)param_1 + 0x7e4c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_UpsampleSsao_MC");
      *(undefined4 *)(param_1 + 0xfca) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_UpsampleSsao_MC_Mask");
      *(undefined4 *)((long)param_1 + 0x7e54) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_UpsampleSsao_LN");
      *(undefined4 *)(param_1 + 0xfcb) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_UpsampleSsao_LN_MC");
      *(undefined4 *)((long)param_1 + 0x7e5c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_UpsampleSsao_LN_MC_Mask");
      *(undefined4 *)(param_1 + 0xfcc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,"tech_TemporalAntialias");
      *(undefined4 *)((long)param_1 + 0x7e64) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_DynamicPixel");
      *(undefined4 *)(param_1 + 0xfcd) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_DynamicPixel_DepthR");
      *(undefined4 *)((long)param_1 + 0x7e6c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_DynamicPixel_DepthG");
      *(undefined4 *)(param_1 + 0xfce) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_DynamicPixel_DepthB");
      *(undefined4 *)((long)param_1 + 0x7e74) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_DynamicPixel_DepthA");
      *(undefined4 *)(param_1 + 0xfcf) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_DynamicPixel_DepthRGBA8");
      *(undefined4 *)((long)param_1 + 0x7e7c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap");
      *(undefined4 *)(param_1 + 0xfd1) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap_DynamicPixel");
      *(undefined4 *)((long)param_1 + 0x7e8c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap_DynamicPixel_DepthR");
      *(undefined4 *)(param_1 + 0xfd2) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap_DynamicPixel_DepthG");
      *(undefined4 *)((long)param_1 + 0x7e94) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap_DynamicPixel_DepthB");
      *(undefined4 *)(param_1 + 0xfd3) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap_DynamicPixel_DepthA");
      *(undefined4 *)((long)param_1 + 0x7e9c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_TemporalAntialias_Tonemap_DynamicPixel_DepthRGBA8");
      *(undefined4 *)(param_1 + 0xfd4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCast_RVALUE");
      *(undefined4 *)((long)param_1 + 0x10c4c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCast_GVALUE");
      *(undefined4 *)((long)param_1 + 0x10c54) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCast_BVALUE");
      *(undefined4 *)((long)param_1 + 0x10c5c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCast_AVALUE");
      *(undefined4 *)((long)param_1 + 0x10c64) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCast_RGBA8");
      *(undefined4 *)((long)param_1 + 0x10c6c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCastLut_RVALUE");
      *(undefined4 *)((long)param_1 + 0x15984) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCastLut_GVALUE");
      *(undefined4 *)((long)param_1 + 0x1598c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCastLut_BVALUE");
      *(undefined4 *)((long)param_1 + 0x15994) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCastLut_AVALUE");
      *(undefined4 *)((long)param_1 + 0x1599c) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,
                         "tech_DepthOfField_BlurFactorAlphaFromDepthTextureTypeCastLut_RGBA8");
      *(undefined4 *)((long)param_1 + 0x159a4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_DepthOfField_NormalizeBackgroundBlurFactor");
      *(undefined4 *)((long)param_1 + 0x1a6bc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_DepthOfField_NormalizeBackgroundBlurFactor_USNORM");
      *(undefined4 *)(param_1 + 0x34d8) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_DepthOfField_FrontBlurBlendFactor");
      *(undefined4 *)((long)param_1 + 0x1a6c4) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_DepthOfField_FrontBlurBlendFactorMask");
      *(undefined4 *)((long)param_1 + 0x1a6cc) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_DepthOfField_FrontBlurBlendFactorDilation");
      *(undefined4 *)(param_1 + 0x34d9) = uVar6;
      uVar6 = (**(code **)(*(long *)*param_1 + 0x78))
                        ((long *)*param_1,"tech_DepthOfField_FrontBlurBlendFactorDilationMask");
      *(undefined4 *)(param_1 + 0x34da) = uVar6;
      FUN_00550fe0(local_78,"tech_MadCocT2_Sn");
      FUN_005515e0(local_78,local_78[0] + -1);
      lVar12 = (long)param_1 + 0x1a6d4;
      lVar13 = -0x19;
      do {
        sprintf((char *)local_478,"%s%d",local_70,(ulong)((int)lVar13 + 0x1a));
        FUN_00563090(param_1,lVar12,local_478);
        lVar12 = lVar12 + 0x58;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0);
      FUN_00551380(local_78);
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)param_1 + 0x1af6c),0,0x3c0);
    }
    if ((iVar10 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0xb97);
      uVar9 = FUN_00546ea0(iVar5);
      FUN_00517ae0("TEXSHADERSET::CreateEffect(): IGPUEffect::CreateEffectFromFile() failed (0x%x: %s).\n"
                   ,iVar5,uVar9);
    }
    if (((local_480 != 0) && (*(int *)puVar2 != 0)) && (*(int *)puVar4 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0xb9c);
      FUN_00517ae0(&DAT_01d43e67,local_480);
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}


