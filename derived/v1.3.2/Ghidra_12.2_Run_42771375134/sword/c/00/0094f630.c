/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094f630; name: FUN_0094f630
 */


void FUN_0094f630(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char local_58 [8];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  local_50 = *param_3;
  local_4f = FUN_008e0a00(*(undefined8 *)(param_3 + 8));
  local_4c = *(undefined4 *)(param_3 + 0x10);
  local_48 = *(undefined4 *)(param_3 + 0x14);
  local_44 = param_3[0x18];
  local_42 = *(undefined2 *)(param_3 + 0x1a);
  local_40 = *(undefined4 *)(param_3 + 0x1c);
  local_3c = param_3[0x20];
  local_3b = param_3[0x21];
  local_38 = *(undefined8 *)(param_3 + 0x28);
  FUN_00942450(param_1);
  uVar2 = FUN_00925af0();
  FUN_0094f8a0(uVar2,local_58,&local_50);
  if (local_58[0] == '\0') {
    return;
  }
  *param_2 = 1;
  if (*(long *)(param_3 + 0x38) != 0) {
    uVar2 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar2,*(undefined8 *)(param_3 + 0x38));
  }
  uVar2 = FUN_009423e0(param_1);
  iVar1 = FUN_00928da0(uVar2,*(undefined8 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10),*param_3,
                       *(undefined2 *)(param_3 + 0x1a),*(undefined4 *)(param_3 + 0x14));
  uVar2 = FUN_009423e0(param_1);
  uVar3 = FUN_00928ef0(uVar2,*(undefined8 *)(param_3 + 8),*param_3,*(undefined4 *)(param_3 + 0x10),
                       iVar1,param_3[0x18]);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_009423e0(param_1);
    FUN_00928fe0(uVar2,*(undefined8 *)(param_3 + 8),*param_3,*(undefined4 *)(param_3 + 0x10),iVar1);
    return;
  }
  if (*(int *)(param_3 + 0x10) != 9) {
    if (iVar1 < 0) {
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar4 = 0x1a;
    }
    else {
      if (iVar1 == 0) goto LAB_0094f77c;
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar4 = 0x19;
    }
    FUN_008e3830(uVar2,uVar4);
  }
LAB_0094f77c:
  uVar2 = FUN_009423b0(param_1);
  FUN_00938090(uVar2,*(undefined8 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10),iVar1,
               *(undefined2 *)(param_3 + 0x1a),param_3[0x30],param_3[0x40]);
  uVar2 = FUN_009423e0(param_1);
  FUN_00928e50(uVar2,*param_3,*(undefined8 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10),iVar1);
  *(int *)(param_2 + 4) = iVar1;
  return;
}


