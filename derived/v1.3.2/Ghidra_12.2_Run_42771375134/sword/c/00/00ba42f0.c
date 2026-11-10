/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ba42f0; name: FUN_00ba42f0
 */


void FUN_00ba42f0(long param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00ba434c;
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00b9a020();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar5 = puVar5 + -10;
        goto LAB_00ba434c;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00ba434c:
  lVar4 = FUN_00b96d00(puVar5);
  *(undefined4 *)(lVar4 + 0x1a4) = param_2;
  local_38 = 0;
  local_34 = 2;
  local_3c = 0;
  FUN_00bcb210(*(undefined8 *)(param_1 + 0x78),&local_34,&local_38,&local_3c);
  *(undefined4 *)(lVar4 + 0x4c) = local_34;
  *(short *)(lVar4 + 0x50) = (short)local_3c;
  uVar1 = FUN_00bb3b80(*(undefined8 *)(param_1 + 0x78));
  *(undefined2 *)(lVar4 + 0x52) = uVar1;
  uVar2 = FUN_00bb6750(*(undefined8 *)(param_1 + 0x78));
  *(undefined4 *)(lVar4 + 0x19c) = uVar2;
  FUN_00b96cf0(puVar5,2);
  return;
}


