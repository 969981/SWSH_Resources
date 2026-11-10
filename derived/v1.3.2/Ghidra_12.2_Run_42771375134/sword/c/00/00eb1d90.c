/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb1d90; name: FUN_00eb1d90
 */


void FUN_00eb1d90(long param_1,undefined1 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x410) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x410) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715b80 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715b80), iVar1 != 0)) {
      uVar3 = FUN_00727dd0();
      *(undefined8 *)PTR_DAT_02715b88 = uVar3;
      __cxa_guard_release(PTR_DAT_02715b80);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715b88) {
        puVar9 = puVar9 + -10;
        goto LAB_00eb1df8;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_00eb1df8:
  local_50 = 0x4b9cb8272bcb3f9;
  pcStack_48 = "unit_obj_tent01_cloth01_01_01_bld";
  local_40 = 0x21;
  local_38 = 0;
  iVar1 = FUN_0072c700(puVar9 + 0x42,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (-1 < iVar1) {
    lVar4 = *(long *)(puVar9[0x43] + 0x290) + (long)iVar1 * 0x4c0;
    plVar7 = *(long **)(lVar4 + 0xd8);
    plVar2 = *(long **)(lVar4 + 0xe0);
    if (plVar2 != plVar7) {
      plVar8 = plVar7;
      if (*plVar7 != 0x15083c3ab707041d) {
        do {
          plVar8 = plVar8 + 4;
          if (plVar2 == plVar8) {
            return;
          }
        } while (*plVar8 != 0x15083c3ab707041d);
      }
      iVar6 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5);
      if (plVar8 == plVar2) {
        iVar6 = -1;
      }
      if (-1 < iVar6) {
        auVar10 = FUN_00ecedd0(param_2);
        if ((ulong)(long)iVar1 <
            (ulong)(((long)(puVar9[0x65] - puVar9[100]) >> 3) * -0x70a3d70a3d70a3d7)) {
          lVar4 = puVar9[100] + (long)iVar1 * 200;
          lVar5 = *(long *)(lVar4 + 0x80);
          if ((ulong)(long)iVar6 < (ulong)(*(long *)(lVar4 + 0x88) - lVar5 >> 4)) {
            *(undefined1 (*) [16])(lVar5 + (long)iVar6 * 0x10) = auVar10;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
    }
  }
  return;
}


