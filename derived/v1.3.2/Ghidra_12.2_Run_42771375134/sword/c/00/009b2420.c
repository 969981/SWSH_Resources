/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2420; name: FUN_009b2420
 */


uint FUN_009b2420(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 *local_48;
  long *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x148) + 0x2b0);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar4 = *param_3;
    FUN_009ba820(&local_50,lVar3,*(undefined8 *)(param_2 + 8),
                 *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x78));
    uVar2 = FUN_009ba170(lVar3,&local_50,uVar4);
    FUN_0075efb0(auStack_28,local_50,0,1);
    puVar1 = local_48;
    local_48 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*local_40 + 0x18))(local_40,puVar1,uStack_38,local_30);
    }
    FUN_0075f0a0(auStack_28);
    puVar1 = local_48;
    local_48 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*local_40 + 0x18))(local_40,puVar1,uStack_38,local_30);
    }
  }
  return uVar2 & 1;
}


