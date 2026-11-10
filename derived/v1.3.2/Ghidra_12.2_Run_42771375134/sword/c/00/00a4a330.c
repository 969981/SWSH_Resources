/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4a330; name: FUN_00a4a330
 */


undefined8 FUN_00a4a330(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x80);
  iVar1 = *(int *)(lVar4 + 0x628);
  if (iVar1 != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00a871c0();
    for (; plVar2 != (long *)lVar4; plVar2 = (long *)*plVar2) {
    }
    uVar3 = FUN_008e0a10(puVar5[0xcf]);
    if ((((uVar3 & 1) != 0) || (*(char *)(*(long *)(param_1 + 0x80) + 0x61d) == '\0')) ||
       (iVar1 != 5)) {
      if (iVar1 == 5) {
        FUN_00a1fd10(0xb);
      }
      return 1;
    }
    FUN_00a1fd10(1);
    FUN_00a37b50(*(undefined8 *)(param_1 + 0x80));
    lVar4 = *(long *)(param_1 + 0x80);
  }
  if (*(char *)(lVar4 + 0x67c) != '\0') {
    FUN_00a1fd10(0);
    FUN_00a37b50(*(undefined8 *)(param_1 + 0x80));
  }
  return 0;
}


