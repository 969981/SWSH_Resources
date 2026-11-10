/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7c9b0; name: FUN_00c7c9b0
 */


void FUN_00c7c9b0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  void *__dest;
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *local_d0;
  long *local_c8;
  long lStack_c0;
  long local_b8;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    local_d0 = (undefined8 *)0x0;
  }
  else {
    FUN_00c80dd0(&local_d0);
  }
  plVar2 = (long *)FUN_00cbe970(local_d0,9);
  if (local_d0 != (undefined8 *)0x0) {
    (**(code **)(local_d0[9] + 0x18))();
    local_d0 = (undefined8 *)0x0;
  }
  if (*(long *)(param_4 + 0x10) != *plVar2) {
    FUN_00c7d0a0(&local_d0,param_3);
    puVar4 = local_d0;
    local_d0 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)*param_2;
    *param_2 = (long)puVar4;
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],puVar5,param_2[2],param_2[3]);
      puVar4 = local_d0;
    }
    param_2[1] = (long)local_c8;
    param_2[2] = lStack_c0;
    param_2[3] = local_b8;
    local_d0 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(*local_c8 + 0x18))(local_c8,puVar4,lStack_c0,local_b8);
    }
    FUN_00c7bb40(param_1,*param_2,param_4);
    return;
  }
  FUN_00c7ccc0(&local_d0,param_3);
  puVar4 = local_d0;
  local_d0 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)*param_2;
  *param_2 = (long)puVar4;
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],puVar5,param_2[2],param_2[3]);
    puVar4 = local_d0;
  }
  param_2[1] = (long)local_c8;
  param_2[2] = lStack_c0;
  param_2[3] = local_b8;
  local_d0 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*local_c8 + 0x18))(local_c8,puVar4,lStack_c0,local_b8);
  }
  __src = *(void **)(param_4 + 0x60);
  if (__src == (void *)0x0) {
    FUN_00cc10e0(&local_d0);
    FUN_00c7cf00(param_1,(long *)(param_4 + 0x10),&local_d0);
    lVar3 = *param_2;
    FUN_00c7bb40(param_1,lVar3,param_4);
    __dest = (void *)(lVar3 + 0x2d8);
    *(undefined4 *)(lVar3 + 0x2d0) = *(undefined4 *)(param_4 + 0x58);
    memcpy(__dest,&local_d0,0x90);
    iVar1 = *(int *)(param_4 + 0x58);
  }
  else {
    lVar3 = *param_2;
    FUN_00c7bb40(param_1,lVar3,param_4);
    __dest = (void *)(lVar3 + 0x2d8);
    *(undefined4 *)(lVar3 + 0x2d0) = *(undefined4 *)(param_4 + 0x58);
    memcpy(__dest,__src,0x90);
    iVar1 = *(int *)(param_4 + 0x58);
  }
  if (iVar1 == 2) {
    *(undefined8 *)(lVar3 + 0x370) = 0;
    *(undefined8 *)(lVar3 + 0x368) = 0;
  }
  else if (iVar1 == 1) {
    *(undefined8 *)(lVar3 + 0x368) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 8);
    *(undefined8 *)(lVar3 + 0x370) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28);
  }
  *(undefined1 *)(lVar3 + 0x2c6) = *(undefined1 *)(param_4 + 0x79);
  *(undefined4 *)(lVar3 + 0x2c8) = *(undefined4 *)(param_4 + 0x160);
  *(undefined1 *)(lVar3 + 0x2cc) = *(undefined1 *)(param_4 + 0x164);
  if (*(char *)(param_4 + 0x78) == '\0') {
    FUN_00cc1260(__dest);
  }
  return;
}


