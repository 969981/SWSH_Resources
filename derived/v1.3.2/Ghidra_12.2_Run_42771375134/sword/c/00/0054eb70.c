/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054eb70; name: FUN_0054eb70
 */


ulong FUN_0054eb70(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  
  plVar11 = *(long **)(*(long *)(param_1 + 0x2f8) + (long)*(int *)(param_1 + 0x380) * 8 + -8);
  lVar10 = *(long *)(*(long *)(*plVar11 + 0x310) + (long)*(int *)((long)plVar11 + 0x1c) * 8);
  if (*(char *)(param_1 + 0x3d0) != '\0') {
    FUN_00517ae0(&DAT_01d245b7);
    FUN_00517ae0("technique name: %s\n",plVar11[2]);
    FUN_00517ae0("  vertexprogram name:   %s\n",*(undefined8 *)(lVar10 + 0x10));
    FUN_00517ae0("  fragmentprogram name: %s\n",*(undefined8 *)(lVar10 + 0x10));
  }
  *(undefined1 *)(lVar10 + 0x18) = 1;
  if (((*(long *)(lVar10 + 0x30) == DAT_0275e808) && (*(long *)(lVar10 + 0x38) == DAT_0275e810)) &&
     (*(long *)(lVar10 + 0x40) == DAT_0275e818)) {
    uVar5 = *(undefined4 *)((long)plVar11 + 0x1c);
    FUN_0054c420(param_1,lVar10);
    FUN_0054b580(param_1,lVar10,uVar5);
  }
  lVar12 = *(long *)(lVar10 + 0x70);
  uVar7 = *(long *)(lVar10 + 0x78) - lVar12;
  if ((int)(uVar7 >> 3) < 1) {
    uVar15 = 0;
    iVar2 = *(int *)(*(long *)(lVar10 + 0x88) + 0x28);
  }
  else {
    uVar9 = uVar7 >> 3 & 0xffffffff;
    uVar7 = uVar7 >> 3 & 1;
    if (uVar9 == 1) {
      lVar8 = 0;
      uVar15 = 0;
    }
    else {
      lVar8 = 0;
      uVar15 = 0;
      do {
        plVar11 = (long *)(lVar12 + lVar8 * 8);
        lVar8 = lVar8 + 2;
        uVar4 = *(int *)(*(long *)(*plVar11 + 0x30) + 0x1c) - 1;
        uVar3 = *(int *)(*(long *)(plVar11[1] + 0x30) + 0x1c) - 1;
        uVar1 = -(uint)(3 < uVar4);
        if (uVar4 < 4) {
          uVar1 = uVar15;
        }
        uVar15 = -(uint)(3 < uVar3);
        if (uVar3 < 4) {
          uVar15 = uVar1;
        }
      } while (uVar9 - uVar7 != lVar8);
    }
    if (uVar7 != 0) {
      uVar4 = *(int *)(*(long *)(*(long *)(lVar12 + lVar8 * 8) + 0x30) + 0x1c) - 1;
      uVar1 = -(uint)(3 < uVar4);
      if (uVar4 < 4) {
        uVar1 = uVar15;
      }
      uVar15 = uVar1;
    }
    iVar2 = *(int *)(*(long *)(lVar10 + 0x88) + 0x28);
  }
  if (iVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x240))(*(long **)(param_1 + 0x78),1,3,0);
  }
  *(long *)(param_1 + 0x88) = lVar10;
  uVar7 = *(long *)(lVar10 + 0x78) - *(long *)(lVar10 + 0x70);
  uVar9 = uVar7 >> 3;
  if (*(char *)(param_1 + 0x3d0) != '\0') {
    FUN_00517ae0(&DAT_01d245b7);
    FUN_00517ae0("program: %s has %d parameters.\n",*(undefined8 *)(lVar10 + 0x10),
                 uVar9 & 0xffffffff);
  }
  if (0 < (int)uVar9) {
    uVar13 = 0;
    do {
      lVar12 = *(long *)(*(long *)(lVar10 + 0x70) + uVar13 * 8);
      if (*(int *)(lVar12 + 0x38) < 1) goto LAB_0054f224;
      lVar8 = *(long *)(lVar12 + 0x30);
      if (*(char *)(param_1 + 0x3d0) == '\0') {
LAB_0054eebc:
        uVar15 = *(uint *)(lVar8 + 0x1c);
        goto joined_r0x0054f150;
      }
      FUN_00517ae0(&DAT_01d245b7);
      FUN_00517ae0("parameter %d/%d: %s.\n",uVar13 & 0xffffffff,uVar9 & 0xffffffff,
                   *(undefined8 *)(lVar12 + 0x10));
      puVar14 = (uint *)(lVar8 + 0x1c);
      switch(*puVar14) {
      case 1:
        if (*(char *)(lVar12 + 0x3c) == '\0') {
          pcVar6 = "float\n";
          break;
        }
        uVar5 = *(undefined4 *)(lVar12 + 0x38);
        pcVar6 = "float[%d]\n";
LAB_0054f1ac:
        FUN_00517ae0(pcVar6,uVar5);
        uVar15 = *puVar14;
        goto joined_r0x0054f150;
      case 2:
        if (*(char *)(lVar12 + 0x3c) != '\0') {
          uVar5 = *(undefined4 *)(lVar12 + 0x38);
          pcVar6 = "float4[%d]\n";
          goto LAB_0054f1ac;
        }
        pcVar6 = "float4\n";
        break;
      case 3:
        if (*(char *)(lVar12 + 0x3c) != '\0') {
          uVar5 = *(undefined4 *)(lVar12 + 0x38);
          pcVar6 = "float4x4[%d]\n";
          goto LAB_0054f1ac;
        }
        pcVar6 = "float4x4\n";
        break;
      case 4:
        FUN_00517ae0("sampler\n");
        if (**(long **)(lVar8 + 0x48) != 0) {
          uVar5 = *(undefined4 *)(lVar12 + 0x44);
          pcVar6 = "pProgramParameter->m_iResourceIndex: %d\n";
          goto LAB_0054f1ac;
        }
        pcVar6 = "  NULL texture.\n";
        break;
      default:
        if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0054eebc;
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: "
                     ,0x2535);
        uVar15 = *puVar14;
        pcVar6 = "invalid ETFXPARAMETERTYPE";
        if (uVar15 < 5) {
          pcVar6 = (&PTR_s_ETFXPT_FLOAT_025faf40)[(int)uVar15];
        }
        FUN_00517ae0("Invalid pGlobalParameter->m_eType: %d: %s.\n",(long)(int)uVar15,pcVar6);
        uVar15 = *puVar14;
        goto joined_r0x0054f150;
      }
      FUN_00517ae0(pcVar6);
      uVar15 = *puVar14;
joined_r0x0054f150:
      if (uVar15 - 1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0054eed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(&DAT_01d6b63c + *(int *)(&DAT_01d6b63c + (ulong)(uVar15 - 1) * 4)))();
        return uVar7;
      }
      if (*(int *)PTR_DAT_02713970 == 0) {
LAB_0054f220:
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = 0xffffffff;
        if (*(int *)PTR_DAT_02713980 != 0) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: "
                       ,0x297e);
          uVar15 = *(uint *)(lVar8 + 0x1c);
          pcVar6 = "invalid ETFXPARAMETERTYPE";
          if (uVar15 < 5) {
            pcVar6 = (&PTR_s_ETFXPT_FLOAT_025faf40)[(int)uVar15];
          }
          FUN_00517ae0("Invalid pGlobalParameter->m_eType: %d: %s.\n",(long)(int)uVar15,pcVar6);
          goto LAB_0054f220;
        }
      }
LAB_0054f224:
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar7 >> 3 & 0xffffffff));
  }
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (iVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x248))();
  }
  return (ulong)(uVar15 & (int)uVar15 >> 0x1f);
}


