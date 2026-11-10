/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa990; name: FUN_009aa990
 */


void FUN_009aa990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  
  uVar1 = FUN_00942380();
  uVar2 = FUN_00942390(param_1);
  FUN_00943860(auStack_48,uVar1,uVar2);
  uVar3 = FUN_00943ae0(auStack_48,&local_28);
  while ((uVar3 & 1) != 0) {
    uVar1 = FUN_009423b0(param_1);
    FUN_009382e0(uVar1,local_28,1);
    uVar3 = FUN_00943ae0(auStack_48,&local_28);
  }
  return;
}


