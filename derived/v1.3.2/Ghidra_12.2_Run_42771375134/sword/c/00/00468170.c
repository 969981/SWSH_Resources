/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468170; name: FUN_00468170
 */


undefined8 FUN_00468170(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02713108;
  puVar3 = *(undefined8 **)(PTR_DAT_02713108 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar3 = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 **)(puVar2 + 0x10) = puVar3;
    puVar4 = *(undefined8 **)(puVar2 + 8);
  }
  else {
    puVar4 = *(undefined8 **)(PTR_DAT_02713108 + 8);
  }
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 **)puVar2 = puVar3;
  }
  else {
    *puVar4 = puVar3;
    puVar3 = *(undefined8 **)(puVar2 + 0x10);
  }
  *(undefined8 **)(puVar2 + 8) = puVar3;
  *(undefined8 *)(puVar2 + 0x10) = *puVar3;
  *puVar3 = 0;
  *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + 1;
  puVar1 = PTR_DAT_02712ee8;
  lVar5 = *(long *)(puVar2 + 8);
  *(undefined8 *)(lVar5 + 8) = param_2;
  *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)puVar1;
  *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) & 0xfe00 | (ushort)param_1 & 0xff;
  if (param_1 < 2) {
    *PTR_DAT_02712ee0 = 1;
  }
  return 1;
}


