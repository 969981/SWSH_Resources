/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dc390; name: FUN_008dc390
 */


/* WARNING: Removing unreachable block (ram,0x008dc3f0) */

undefined8 FUN_008dc390(long param_1,short param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + (ulong)*(uint *)(param_1 + 0xc08) * 0x20 + 8);
  uVar1 = (ulong)*(uint *)(param_1 + 0xc08);
  do {
    uVar4 = uVar1;
    if (0x5f < uVar4) goto LAB_008dc410;
    uVar3 = *puVar5;
    sVar2 = FUN_008dbea0(uVar3);
    if (sVar2 == 0) goto LAB_008dc400;
    sVar2 = FUN_008dbea0(uVar3);
    puVar5 = puVar5 + 4;
    uVar1 = uVar4 + 1;
  } while (sVar2 != param_2);
  if ((uint)uVar4 < 0x60) {
LAB_008dc400:
    uVar3 = *(undefined8 *)(param_1 + (uVar4 & 0xffffffff) * 0x20 + 8);
  }
  else {
LAB_008dc410:
    uVar3 = 0;
  }
  return uVar3;
}


