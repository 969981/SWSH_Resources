/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01069e00; name: FUN_01069e00
 */


void FUN_01069e00(long *param_1,long *param_2,ulong param_3)

{
  undefined2 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float local_40;
  float local_3c;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_0073d760(*(undefined8 *)(*param_1 + 0xb0));
  lVar4 = *param_1;
  uVar1 = FUN_006f82b0(*(undefined8 *)(*param_2 + 0xb0));
  local_38._0_6_ = CONCAT24(uVar1,(undefined4)local_38);
  uVar1 = FUN_006f8330(*(undefined8 *)(*param_2 + 0xb0));
  local_38 = CONCAT62(local_38._2_6_,uVar1);
  FUN_0073d440(*(undefined8 *)(lVar4 + 0xb0),(long)&local_38 + 4,&local_38);
  local_38 = CONCAT44(1,(undefined4)local_38);
  FUN_0073d4a0(*(undefined8 *)(*param_1 + 0xb0),(long)&local_38 + 4);
  local_38 = local_38 & 0xffffffff;
  FUN_0073d480(*(undefined8 *)(*param_1 + 0xb0),(long)&local_38 + 4);
  FUN_0073bed0(*(undefined8 *)(*param_1 + 0xb0),param_1 + 2);
  if ((param_3 & 1) == 0) {
    plVar3 = param_1 + 1;
    lVar4 = *param_1;
  }
  else {
    if (*(char *)((long)param_1 + 0x14) == '\0') goto LAB_01069ed0;
    plVar3 = (long *)((long)param_1 + 0xc);
    lVar4 = *param_1;
  }
  local_38 = local_38 & 0xffffffff;
  FUN_0073c7b0(*(undefined8 *)(lVar4 + 0xb0),(long)&local_38 + 4,plVar3);
LAB_01069ed0:
  lVar4 = *param_1;
  local_38 = 0;
  iVar2 = FUN_006f82b0(*(undefined8 *)(*param_2 + 0xb0));
  local_3c = (float)iVar2;
  iVar2 = FUN_006f8330(*(undefined8 *)(*param_2 + 0xb0));
  local_40 = (float)iVar2;
  FUN_0073ec30(*(undefined8 *)(lVar4 + 0xb0),(long)&local_38 + 4,&local_38,&local_3c,&local_40);
  local_38 = local_38 & 0xffffffff;
  FUN_0073bed0(*(undefined8 *)(*param_1 + 0xb0),(long)&local_38 + 4);
  return;
}


