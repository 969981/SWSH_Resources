/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047a880; name: FUN_0047a880
 */


undefined4 FUN_0047a880(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_02712dc8;
  puVar4 = *(undefined8 **)(param_2 + 0x88);
  local_78 = *puVar4;
  local_70 = puVar4[1];
  local_68 = (long *)puVar4[2];
  local_60 = 0;
  local_58 = *(undefined4 *)(puVar4 + 4);
  local_50 = 0;
  uStack_48 = 0;
  if ((local_68 != (long *)0x0 && *(long *)PTR_DAT_02712dc8 != 0) && (*local_68 != 0)) {
    FUN_0048ad60();
    puVar4 = *(undefined8 **)(param_2 + 0x88);
  }
  FUN_0047a310(param_1,puVar4[3],&local_60);
  if (local_60 == 0) {
    uVar2 = 2;
    lVar3 = *(long *)puVar1;
  }
  else {
    *(undefined8 **)(param_2 + 0x88) = &local_78;
    uVar2 = FUN_0047fc80(param_1,param_2);
    lVar3 = *(long *)puVar1;
  }
  if (((lVar3 == 0) || (local_68 == (long *)0x0)) || (*local_68 == 0)) {
    FUN_00479190(&local_50);
  }
  else {
    FUN_0048ad70();
    FUN_00479190(&local_50);
  }
  if (local_60 != 0) {
    FUN_0045b680();
  }
  return uVar2;
}


