/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a556f0; name: FUN_00a556f0
 */


void FUN_00a556f0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  long local_68;
  
  puVar4 = PTR_DAT_02716320;
  lVar8 = *(long *)(param_1 + 0x10);
  piVar11 = &DAT_02154fa8;
  uVar1 = 6 - param_2;
  if (5 < param_2) {
    uVar1 = param_2 - 6;
  }
  do {
    iVar6 = piVar11[1];
    local_68 = *(long *)(param_1 + (long)*piVar11 * 8 + 0x18);
    uVar3 = piVar11[2];
    if (local_68 == -0x340d631b7bddd9bb || local_68 == 0) {
LAB_00a55864:
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)FUN_0167b6b0(*(undefined8 *)(lVar8 + 0x1b0),&local_68);
      if (((*PTR_DAT_02716318 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_02716318), iVar5 != 0)) {
        *(undefined8 *)puVar4 = 0;
        __cxa_guard_release(PTR_DAT_02716318);
      }
      if (plVar9 != (long *)0x0) {
        for (plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9); plVar10 != (long *)0x0;
            plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar4) goto LAB_00a55868;
        }
        goto LAB_00a55864;
      }
    }
LAB_00a55868:
    local_68 = *(long *)(param_1 + (long)iVar6 * 8 + 0x18);
    if (local_68 == -0x340d631b7bddd9bb || local_68 == 0) {
LAB_00a5587c:
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)FUN_0167b6b0(*(undefined8 *)(lVar8 + 0x1b0),&local_68);
      if (((*PTR_DAT_02716318 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_02716318), iVar6 != 0)) {
        *(undefined8 *)puVar4 = 0;
        __cxa_guard_release(PTR_DAT_02716318);
      }
      if (plVar10 != (long *)0x0) {
        for (plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10); plVar7 != (long *)0x0;
            plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar4) goto LAB_00a55880;
        }
        goto LAB_00a5587c;
      }
    }
LAB_00a55880:
    if (plVar9 != (long *)0x0) {
      *(byte *)(plVar9 + 0xb) = *(byte *)(plVar9 + 0xb) & 0xfe | uVar3 <= uVar1;
    }
    if (plVar10 != (long *)0x0) {
      *(byte *)(plVar10 + 0xb) = *(byte *)(plVar10 + 0xb) & 0xfe | uVar1 < uVar3;
    }
    piVar11 = piVar11 + 3;
    if (piVar11 == (int *)&DAT_02154ff0) {
      lVar2 = 0x78;
      if (param_2 < 7) {
        lVar2 = 0x80;
      }
      local_68 = *(long *)(param_1 + lVar2);
      FUN_00ffd010(lVar8,&local_68);
      local_68 = *(long *)(param_1 + 0x88);
      FUN_00ffd430(lVar8,&local_68);
      FUN_00ffd010(lVar8,&local_68);
      return;
    }
  } while( true );
}


