/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e4e0; name: FUN_00d7e4e0
 */


void FUN_00d7e4e0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 local_38;
  
  uVar3 = FUN_00d705e0(param_2);
  local_38 = CONCAT71(local_38._1_7_,uVar3);
  lVar4 = FUN_00d70870(&local_38);
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  if (*param_3 == 1) {
    local_38 = uVar1;
    FUN_00ffd430(param_1 + 0x100,&local_38);
    local_38 = uVar2;
  }
  else {
    if (*param_3 != 0) {
      return;
    }
    local_38 = uVar2;
    FUN_00ffd430(param_1 + 0x100,&local_38);
    local_38 = uVar1;
  }
  FUN_00ffd010(param_1 + 0x100,&local_38);
  return;
}


