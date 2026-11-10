/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081e700; name: FUN_0081e700
 */


undefined8 * FUN_0081e700(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_70 [5];
  byte *local_48;
  int local_40;
  undefined8 local_38;
  
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    lVar2 = param_1[2];
    local_40 = 0;
    FUN_0081ec70(&local_48,param_2);
    local_38 = 0;
    FUN_00823410(local_70,lVar2,&local_48);
    plVar1 = (long *)(local_70[0] + 0x10);
    if ((local_40 == 9) && (local_48 != (byte *)0x0)) {
      if ((*local_48 & 1) != 0) {
        operator_delete(*(void **)(local_48 + 0x10));
      }
      operator_delete(local_48);
    }
    puVar4 = (undefined8 *)*plVar1;
  }
  else {
    plVar1 = (long *)FUN_008231a0(param_1[2],param_2);
    puVar4 = (undefined8 *)*plVar1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    if (*param_1 == 0) {
      puVar4 = operator_new(0x20);
      *(undefined4 *)(puVar4 + 1) = 0;
      FUN_0081ec70(puVar4,param_2);
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
    }
    else {
      puVar4 = (undefined8 *)FUN_0080efb0(*param_1,0,0x20);
      lVar2 = *param_1;
      *(undefined4 *)(puVar4 + 1) = 0;
      FUN_00823b30(lVar2,puVar4);
      lVar2 = *param_1;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      FUN_00823ba0(lVar2);
      uVar3 = *param_2;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar4 = uVar3;
    }
    *plVar1 = (long)puVar4;
  }
  return puVar4 + 2;
}


