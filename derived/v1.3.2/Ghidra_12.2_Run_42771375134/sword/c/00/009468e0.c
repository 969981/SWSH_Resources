/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009468e0; name: FUN_009468e0
 */


undefined8 FUN_009468e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((ulong)*(byte *)(param_1 + 0xb48) < 0x1e) {
    lVar4 = param_1 + (ulong)*(byte *)(param_1 + 0xb48) * 0x60;
    *(undefined8 *)(lVar4 + 8) = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined1 *)(lVar4 + 0x28) = *(undefined1 *)(param_2 + 4);
    *(undefined8 *)(lVar4 + 0x18) = uVar2;
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    *(undefined8 *)(lVar4 + 0x2c) = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined1 *)(lVar4 + 0x34) = *(undefined1 *)((long)param_2 + 0x2c);
    FUN_00943ee0(lVar4 + 0x38,param_2 + 6);
    *(undefined8 *)(lVar4 + 0x5c) = *(undefined8 *)((long)param_2 + 0x54);
    *(char *)(param_1 + 0xb48) = *(char *)(param_1 + 0xb48) + '\x01';
    return 1;
  }
  return 0;
}


