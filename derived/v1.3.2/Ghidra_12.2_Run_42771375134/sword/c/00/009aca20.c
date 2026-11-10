/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aca20; name: FUN_009aca20
 */


void FUN_009aca20(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined8 **local_28;
  
  switch(*(undefined4 *)(param_2 + 1)) {
  case 1:
    local_58 = param_2;
    FUN_00942450(param_1);
    uVar2 = FUN_00925340();
    FUN_0099c400(uVar2,&local_28,&local_58);
    break;
  case 2:
    local_58 = (undefined8 *)*param_2;
    local_50 = *(undefined2 *)((long)param_2 + 0x1a);
    local_4e = *(undefined1 *)((long)param_2 + 0x1c);
    local_4d = *(undefined1 *)(param_2 + 3);
    FUN_00942450(param_1);
    uVar2 = FUN_00925930();
    FUN_009a4d20(uVar2,&local_28,&local_58);
    break;
  case 3:
    local_58 = (undefined8 *)*param_2;
    local_50 = CONCAT11(local_50._1_1_,*(undefined1 *)((long)param_2 + 0x1f));
    FUN_00942450(param_1);
    uVar2 = FUN_009259a0();
    FUN_009abc10(uVar2,&local_28,&local_58);
    FUN_0093ac80(&local_58);
    FUN_0093ad00(&local_58,(ulong)local_28 & 0xff);
    local_28 = &local_58;
    FUN_00942450(param_1);
    uVar2 = FUN_00925020();
    FUN_00943510(uVar2,auStack_60,&local_28);
    break;
  case 4:
    local_58 = (undefined8 *)*param_2;
    FUN_00942450(param_1);
    uVar2 = FUN_009252f0();
    FUN_009a2da0(uVar2,&local_28,&local_58);
    if ((char)local_28 != '\0') {
      FUN_009423f0(param_1);
      uVar2 = FUN_00942fe0();
      FUN_00943280(uVar2,5);
    }
    break;
  case 5:
    local_58 = (undefined8 *)*param_2;
    FUN_00942450(param_1);
    uVar2 = FUN_00925080();
    FUN_009aab60(uVar2,&local_28,&local_58);
    break;
  case 6:
    uVar1 = FUN_008e0a00(*param_2);
    local_58 = (undefined8 *)CONCAT71(local_58._1_7_,uVar1);
    FUN_00942450(param_1);
    uVar2 = FUN_00925920();
    FUN_009a3550(uVar2,&local_28,&local_58);
    break;
  case 8:
    FUN_00942450(param_1);
    uVar2 = FUN_00925ab0();
    FUN_009ad140(uVar2,&local_28,&local_58);
    break;
  case 9:
    FUN_009423f0(param_1);
    uVar2 = FUN_00942fe0();
    FUN_00943280(uVar2,4);
    return;
  }
  return;
}


