/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013903e0; name: FUN_013903e0
 */


void FUN_013903e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 == (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), iVar5 != 0)) {
      uVar9 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar9;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if (puVar6 == (undefined8 *)PTR_DAT_02715080) {
          puVar7 = puVar11 + -10;
          goto LAB_01390448;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
      puVar7 = (undefined8 *)0x0;
    }
  }
LAB_01390448:
  lVar8 = FUN_013934f0(puVar7,auStack_48);
  *(undefined1 *)(lVar8 + 0x75) = 0;
  if (*(long *)(param_1 + 0x468) != 0) {
    FUN_01392f90(*(long *)(param_1 + 0x468),auStack_40);
    FUN_0137ccd0();
    FUN_01392ce0(*(undefined8 *)(param_1 + 0x468),auStack_38);
    FUN_01396a60();
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    uVar9 = FUN_0137a220(*(long *)(param_1 + 0x400),auStack_28);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x408) != 0) {
    uVar9 = FUN_0137a220(*(long *)(param_1 + 0x408),auStack_28);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    uVar9 = FUN_0137a220(*(long *)(param_1 + 0x410),auStack_28);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x418) != 0) {
    uVar9 = FUN_0137a220(*(long *)(param_1 + 0x418),auStack_28);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x420) != 0) {
    uVar9 = FUN_0137a500(*(long *)(param_1 + 0x420),auStack_30);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    uVar9 = FUN_0137a500(*(long *)(param_1 + 0x428),auStack_30);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x430) != 0) {
    uVar9 = FUN_0137a500(*(long *)(param_1 + 0x430),auStack_30);
    FUN_012dc480(uVar9,0);
  }
  if (*(long *)(param_1 + 0x438) != 0) {
    uVar9 = FUN_0137a500(*(long *)(param_1 + 0x438),auStack_30);
    FUN_012dc480(uVar9,0);
  }
  *(undefined4 *)(param_1 + 0x100) = 2;
  pcVar10 = *(code **)(param_1 + 0x88);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar10)(param_1 + 0xa0);
  }
  puVar1 = PTR_LAB_02728cb8;
  *(long *)(param_1 + 0xa0) = param_1;
  puVar3 = PTR_LAB_02728cc8;
  puVar2 = PTR_LAB_02728cc0;
  *(undefined8 *)(param_1 + 0xa8) = 0x100;
  *(undefined8 *)(param_1 + 0xb0) = 1;
  puVar4 = PTR_LAB_02728cd0;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar2;
  *(undefined **)(param_1 + 0x90) = puVar3;
  *(undefined **)(param_1 + 0x98) = puVar4;
  return;
}


