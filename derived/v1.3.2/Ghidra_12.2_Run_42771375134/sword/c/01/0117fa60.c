/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117fa60; name: FUN_0117fa60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0117fa60(long param_1)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar5 == 0) {
    if (_DAT_00000060 != 0) {
      uVar3 = 0;
      goto LAB_0117fbe0;
    }
LAB_0117faf0:
    if ((*(char *)(param_1 + 0x184) == '\0') ||
       (uVar4 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940), (uVar4 & 1) != 0)) {
      uVar3 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x184) = 1;
      local_c0 = &LAB_01180ee0;
      local_b8 = FUN_01180ef0;
      local_b0 = &LAB_01180f00;
      local_a8 = &LAB_01180f10;
      local_140 = &LAB_01180f20;
      local_138 = FUN_01180f30;
      local_130 = &LAB_01180f40;
      local_128 = &LAB_01180f50;
      alStack_120[0] = param_1;
      alStack_a0[0] = param_1;
      uVar3 = FUN_0127b1e0(param_1 + 0x70,&local_c0,&local_140);
      pcVar2 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = (undefined1 *)0x0;
        local_128 = (undefined1 *)0x0;
        local_140 = (undefined1 *)0x0;
        local_138 = (code *)0x0;
        (*pcVar2)(alStack_120);
      }
      pcVar2 = local_b8;
      bVar1 = local_b8 != (code *)0x0;
      local_b8 = (code *)0x0;
      if (bVar1) {
        local_b0 = (undefined1 *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar2)(alStack_a0);
      }
    }
    if (lVar5 == 0) goto LAB_0117fbe0;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    FUN_01127680(&local_c0,lVar5);
    lVar6 = *(long *)(local_c0 + 0x60);
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
    if (lVar6 == 0) goto LAB_0117faf0;
    uVar3 = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
LAB_0117fbe0:
  return uVar3 & 1;
}


