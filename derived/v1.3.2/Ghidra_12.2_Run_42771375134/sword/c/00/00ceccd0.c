/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ceccd0; name: FUN_00ceccd0
 */


void FUN_00ceccd0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar6)(puVar6);
  lVar5 = FUN_00ce9310();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  uVar1 = *(undefined4 *)(puVar6 + 2);
  iVar2 = *(int *)((long)puVar6 + 0x14);
  iVar3 = FUN_00887e60(*(undefined8 *)(param_1 + 0xa0),uVar1,3);
  FUN_01520760(*(undefined8 *)(param_1 + 0x98),uVar1,iVar2,1);
  FUN_01520b70(*(undefined8 *)(param_1 + 0x98),0x644,iVar3 * iVar2);
  FUN_00cebe00(*(undefined8 *)(param_1 + 0x78),uVar1);
  FUN_00ceb640(*(undefined8 *)(param_1 + 0x78));
  FUN_006cf0a0(auStack_50,&DAT_026450d8);
  FUN_016d3620(auStack_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_00ced690(param_1,0xf49d0a39c604e79c,0,1,0);
  *(undefined4 *)(param_1 + 0x124) = 2;
  return;
}


