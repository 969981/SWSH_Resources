/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479d10; name: FUN_00479d10
 */


undefined8 FUN_00479d10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_02712a90;
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = 0;
    uVar6 = 2;
  }
  else {
    uVar6 = 1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 5) = 1;
    *param_1 = puVar3;
    puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar2,0x80);
    puVar3[3] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = 0;
      puVar3[2] = puVar4;
      *(undefined4 *)(puVar3 + 4) = 4;
      do {
        puVar1 = puVar4;
        puVar1[2] = 0;
        puVar1[3] = 0;
        uVar5 = uVar5 + 1;
        *puVar1 = puVar1 + 4;
        puVar4 = puVar1 + 4;
      } while (uVar5 < *(uint *)(puVar3 + 4));
      uVar6 = 1;
      *puVar1 = 0;
    }
  }
  return uVar6;
}


