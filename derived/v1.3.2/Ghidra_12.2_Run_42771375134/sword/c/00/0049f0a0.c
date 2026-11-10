/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049f0a0; name: FUN_0049f0a0
 */


void FUN_0049f0a0(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 local_60;
  undefined1 local_58;
  
  lVar1 = param_2 + (param_3 & 0xffffffff) * 0x10;
  puVar2 = (uint *)(lVar1 + 0x38);
  if (*puVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x30);
    puVar4 = (undefined4 *)*plVar3;
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar5 = puVar4 + 1;
      FUN_0049b9c0(param_1,param_2,*puVar4,param_4,&local_60,1,1);
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)(*plVar3 + (ulong)*puVar2 * 4));
  }
  return;
}


