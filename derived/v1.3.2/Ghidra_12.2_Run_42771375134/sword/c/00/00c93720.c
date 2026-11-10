/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c93720; name: FUN_00c93720
 */


void FUN_00c93720(long *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_38;
  
  if ((param_1 != (long *)0x0) && ((**(code **)(*param_1 + 0xa8))(&local_38), local_38 != 0)) {
    if (*(int *)(local_38 + 0x54) != 0) {
      if ((local_38 == 0) || (lVar9 = *(long *)(local_38 + 0x60), lVar9 == 0)) {
        lVar9 = 0;
      }
      else {
        uVar4 = FUN_00a8cbe0(lVar9);
        lVar9 = lVar9 + -0x50;
        if ((uVar4 & 1) == 0) {
          lVar9 = 0;
        }
      }
      local_68 = 0x4d2d32e941c2104a;
      local_60 = "num1Skin_vis";
      local_58 = 0xc;
      local_50 = 0;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      iVar3 = FUN_0072e390(*(undefined8 *)(lVar9 + 0x360),&local_68);
      if (-1 < iVar3) {
        FUN_0072e410(*(undefined8 *)(lVar9 + 0x360),iVar3,(uVar2 & uVar1) >> 0x1f,0);
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      local_68 = -0x2956a53b5bd8c159;
      local_60 = "num2Skin_vis";
      local_58 = 0xc;
      local_50 = 0;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      iVar3 = FUN_0072e390(*(undefined8 *)(lVar9 + 0x360),&local_68);
      if (-1 < iVar3) {
        FUN_0072e410(*(undefined8 *)(lVar9 + 0x360),iVar3,-1 < (int)uVar1 && (int)uVar2 < 0,0);
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      local_68 = 0x82064882922dc34;
      local_60 = "num3Skin_vis";
      local_58 = 0xc;
      local_50 = 0;
      uVar1 = param_3[2];
      iVar3 = FUN_0072e390(*(undefined8 *)(lVar9 + 0x360),&local_68);
      if (-1 < iVar3) {
        FUN_0072e410(*(undefined8 *)(lVar9 + 0x360),iVar3,uVar1 >> 0x1f ^ 1,0);
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      local_60 = (char *)*param_2;
      local_58 = param_2[1];
      local_50 = param_2[2];
      local_48 = param_2[3];
      local_68 = lVar9;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      uVar1 = *param_3;
      iVar3 = FUN_0072c700(local_68 + 0x210,&local_60);
      if (iVar3 != -1) {
        lVar9 = *(long *)(*(long *)(local_68 + 0x218) + 0x290) + (long)iVar3 * 0x4c0;
        plVar6 = *(long **)(lVar9 + 0xa8);
        plVar7 = *(long **)(lVar9 + 0xb0);
        if (plVar7 != plVar6) {
          plVar8 = plVar6;
          if (*plVar6 != -0x7fc016c4a4144ec1) {
            do {
              plVar8 = plVar8 + 4;
              if (plVar7 == plVar8) goto LAB_00c93a14;
            } while (*plVar8 != -0x7fc016c4a4144ec1);
          }
          if ((plVar8 != plVar7) && (((long)plVar8 - (long)plVar6 & 0x1fffffffe0U) != 0x1fffffffe0))
          {
            if ((ulong)((*(long *)(local_68 + 0x328) - *(long *)(local_68 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= (ulong)(long)iVar3) goto LAB_00c93c60;
            lVar9 = *(long *)(local_68 + 800) + (long)iVar3 * 200;
            uVar4 = ((long)plVar8 - (long)plVar6) * 0x8000000 >> 0x20;
            lVar5 = *(long *)(lVar9 + 0x50);
            if ((ulong)(*(long *)(lVar9 + 0x58) - lVar5 >> 2) <= uVar4) goto LAB_00c93c60;
            *(float *)(lVar5 + uVar4 * 4) =
                 (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) / 10.0;
          }
        }
      }
LAB_00c93a14:
      uVar1 = param_3[1];
      iVar3 = FUN_0072c700(local_68 + 0x210,&local_60);
      if (iVar3 != -1) {
        lVar9 = *(long *)(*(long *)(local_68 + 0x218) + 0x290) + (long)iVar3 * 0x4c0;
        plVar6 = *(long **)(lVar9 + 0xa8);
        plVar7 = *(long **)(lVar9 + 0xb0);
        if (plVar7 != plVar6) {
          plVar8 = plVar6;
          if (*plVar6 != 0x24e0ad81f49b9766) {
            do {
              plVar8 = plVar8 + 4;
              if (plVar7 == plVar8) goto LAB_00c93b14;
            } while (*plVar8 != 0x24e0ad81f49b9766);
          }
          if ((plVar8 != plVar7) && (((long)plVar8 - (long)plVar6 & 0x1fffffffe0U) != 0x1fffffffe0))
          {
            if ((ulong)((*(long *)(local_68 + 0x328) - *(long *)(local_68 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= (ulong)(long)iVar3) goto LAB_00c93c60;
            lVar9 = *(long *)(local_68 + 800) + (long)iVar3 * 200;
            uVar4 = ((long)plVar8 - (long)plVar6) * 0x8000000 >> 0x20;
            lVar5 = *(long *)(lVar9 + 0x50);
            if ((ulong)(*(long *)(lVar9 + 0x58) - lVar5 >> 2) <= uVar4) goto LAB_00c93c60;
            *(float *)(lVar5 + uVar4 * 4) =
                 (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) / 10.0;
          }
        }
      }
LAB_00c93b14:
      uVar1 = param_3[2];
      iVar3 = FUN_0072c700(local_68 + 0x210,&local_60);
      if (iVar3 != -1) {
        lVar9 = *(long *)(*(long *)(local_68 + 0x218) + 0x290) + (long)iVar3 * 0x4c0;
        plVar6 = *(long **)(lVar9 + 0xa8);
        plVar7 = *(long **)(lVar9 + 0xb0);
        if (plVar7 != plVar6) {
          plVar8 = plVar6;
          if (*plVar6 != 0x3a4ee1388ca72971) {
            do {
              plVar8 = plVar8 + 4;
              if (plVar7 == plVar8) goto LAB_00c93c14;
            } while (*plVar8 != 0x3a4ee1388ca72971);
          }
          if ((plVar8 != plVar7) && (((long)plVar8 - (long)plVar6 & 0x1fffffffe0U) != 0x1fffffffe0))
          {
            if ((ulong)((*(long *)(local_68 + 0x328) - *(long *)(local_68 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= (ulong)(long)iVar3) {
LAB_00c93c60:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar9 = *(long *)(local_68 + 800) + (long)iVar3 * 200;
            uVar4 = ((long)plVar8 - (long)plVar6) * 0x8000000 >> 0x20;
            lVar5 = *(long *)(lVar9 + 0x50);
            if ((ulong)(*(long *)(lVar9 + 0x58) - lVar5 >> 2) <= uVar4) goto LAB_00c93c60;
            *(float *)(lVar5 + uVar4 * 4) =
                 (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) / 10.0;
          }
        }
      }
LAB_00c93c14:
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


