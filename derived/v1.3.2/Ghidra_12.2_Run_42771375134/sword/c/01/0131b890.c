/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131b890; name: FUN_0131b890
 */


undefined8 FUN_0131b890(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_3 + 0x10) == 0) || (*(int *)(*(long *)(param_3 + 0x10) + 0x54) == 0)) {
    return 0;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_3 + 0x10) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0131b904;
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        iVar1 = FUN_0069d230(puVar5);
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_0131b904;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_0131b904:
  uVar4 = FUN_0069c820(param_1,param_2,puVar5,param_4);
  return uVar4;
}


