/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01381a50; name: FUN_01381a50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01381a50(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  long local_60 [3];
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar20 == (undefined8 *)0x0)) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)*puVar20)(puVar20);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_02715078), iVar8 != 0)) {
      uVar12 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar12;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar10 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        if (puVar9 == (undefined8 *)PTR_DAT_02715080) {
          puVar10 = puVar20 + -10;
          goto LAB_01381acc;
        }
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != (undefined8 *)0x0);
      puVar10 = (undefined8 *)0x0;
    }
  }
LAB_01381acc:
  lVar11 = FUN_00adc640(puVar10,*(undefined8 *)(param_1 + 8),param_2);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_60[0] = 8;
  FUN_00727220(lVar11,*param_3,local_60);
  local_60[0] = 0;
  FUN_007273c0(lVar11,1,local_60);
  uVar7 = uRam0000000002a70a28;
  uVar6 = _DAT_02a70a20;
  uVar5 = _UNK_01d4ae58;
  uVar4 = _DAT_01d4ae50;
  uVar3 = _UNK_01d49dc8;
  uVar12 = _DAT_01d49dc0;
  *(undefined1 *)(lVar11 + 0xf0) = 0;
  *(undefined8 *)(lVar11 + 0x88) = uVar5;
  *(undefined8 *)(lVar11 + 0x80) = uVar4;
  *(undefined8 *)(lVar11 + 0x98) = uVar3;
  *(undefined8 *)(lVar11 + 0x90) = uVar12;
  uVar12 = _DAT_01d4b4f0;
  *(undefined8 *)(lVar11 + 0xa8) = _UNK_01d4b4f8;
  *(undefined8 *)(lVar11 + 0xa0) = uVar12;
  *(undefined8 *)(lVar11 + 0xb8) = uVar7;
  *(undefined8 *)(lVar11 + 0xb0) = uVar6;
  uVar2 = *param_4;
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_4 + 1);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  puVar1 = &DAT_026972e8;
  if (*(char *)(param_4 + 1) != '\0') {
    puVar1 = &DAT_02697300;
  }
  FUN_006cf0a0(local_60,puVar1);
  iVar8 = FUN_0072c700(lVar11 + 0x210,local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (iVar8 != -1) {
    FUN_006cf0a0(local_60,&DAT_02697318);
    lVar13 = *(long *)(*(long *)(lVar11 + 0x218) + 0x290) + (long)iVar8 * 0x4c0;
    plVar17 = *(long **)(lVar13 + 0xd8);
    plVar14 = *(long **)(lVar13 + 0xe0);
    plVar19 = plVar17;
    if (plVar17 == plVar14) {
      plVar18 = plVar14;
    }
    else {
      plVar18 = plVar17;
      if (*plVar17 != local_60[0]) {
        do {
          plVar18 = plVar18 + 4;
          if (plVar14 == plVar18) {
            plVar18 = plVar14;
            plVar19 = plVar14;
            goto LAB_01381c30;
          }
        } while (*plVar18 != local_60[0]);
        plVar19 = plVar18;
      }
    }
LAB_01381c30:
    iVar16 = (int)((ulong)((long)plVar19 - (long)plVar17) >> 5);
    if (plVar18 == plVar14) {
      iVar16 = -1;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (iVar16 != -1) {
      auVar21 = FUN_00ecedd0(*param_4);
      if ((ulong)(long)iVar8 <
          (ulong)((*(long *)(lVar11 + 0x328) - *(long *)(lVar11 + 800) >> 3) * -0x70a3d70a3d70a3d7))
      {
        lVar13 = *(long *)(lVar11 + 800) + (long)iVar8 * 200;
        lVar15 = *(long *)(lVar13 + 0x80);
        if ((ulong)(long)iVar16 < (ulong)(*(long *)(lVar13 + 0x88) - lVar15 >> 4)) {
          *(undefined1 (*) [16])(lVar15 + (long)iVar16 * 0x10) = auVar21;
          goto LAB_01381cc0;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
LAB_01381cc0:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


