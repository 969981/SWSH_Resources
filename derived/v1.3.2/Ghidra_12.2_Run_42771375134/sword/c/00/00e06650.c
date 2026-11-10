/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e06650; name: FUN_00e06650
 */


undefined8 FUN_00e06650(undefined8 param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_318 [696];
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar3 = *(uint **)(*(long *)(lVar7 + 0x198) + 400);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    puVar3 = (uint *)0x0;
    uVar2 = uRam0000000000000000;
  }
  else {
    puVar3 = (uint *)((long)piVar1 + uVar4);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    uVar2 = *puVar3;
  }
  if (uVar2 != 0) {
    puVar3 = puVar3 + 0xc;
    uVar4 = 0;
    do {
      uVar8 = (ulong)puVar3[-0xb];
      lVar5 = uVar8 - (long)*(int *)((long)puVar3 + (uVar8 - 0x2c));
      if (((4 < *(ushort *)((long)puVar3 + lVar5 + -0x2c)) &&
          (uVar6 = (ulong)*(ushort *)((long)puVar3 + lVar5 + -0x28), uVar6 != 0)) &&
         (lVar5 = *(long *)((long)puVar3 + uVar8 + uVar6 + -0x2c),
         (lVar5 != -0x340d631b7bddd9bb && lVar5 != 0) && *param_2 == lVar5)) {
                    /* WARNING: Subroutine does not return */
        memset(auStack_318,0,0x2b2);
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar2);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return 0;
}


