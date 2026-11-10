/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c74a0; name: FUN_004c74a0
 */


undefined8 FUN_004c74a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined4 *)PTR_DAT_02712ac0;
  local_40 = param_2;
  uStack_38 = param_3;
  lVar5 = FUN_0047d760(&local_40);
  if (lVar5 == 0) {
    uVar6 = 2;
  }
  else {
    puVar1 = (undefined4 *)(param_4 + 0x90);
    if (param_4 == 0) {
      puVar1 = (undefined4 *)(lVar5 + 0x3c);
    }
    uVar4 = *puVar1;
    cVar3 = FUN_004ca390(&local_40);
    if (cVar3 != '\0') {
      uVar4 = FUN_004ca390(&local_40);
    }
    if (param_4 == 0) {
      uVar6 = FUN_004d4020(param_1,param_1,uVar4,uVar2,&local_40,0);
    }
    else {
      uVar6 = FUN_004d4020(param_1,param_1,uVar4,uVar2,&local_40,param_4);
      if ((int)uVar6 == 1) {
        FUN_004d0be0(param_1,param_4,0);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}


