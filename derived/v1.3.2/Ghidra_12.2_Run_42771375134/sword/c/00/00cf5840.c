/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf5840; name: FUN_00cf5840
 */


void FUN_00cf5840(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_38;
  
  local_38 = 0xe82c915b1d8e649a;
  FUN_00ffdd70(param_1 + 0x100,&local_38);
  FUN_016b2eb0();
  FUN_00cf6a00(param_1,0);
  pcVar4 = *(code **)(param_1 + 0x5e8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    *(undefined8 *)(param_1 + 0x5f8) = 0;
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    (*pcVar4)(param_1 + 0x600);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x600);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x5f0) = param_2[2];
    *(undefined8 *)(param_1 + 0x5f8) = uVar3;
    *(undefined8 *)(param_1 + 0x5e0) = uVar1;
    *(undefined8 *)(param_1 + 0x5e8) = uVar2;
  }
  local_38 = 0x3ac4740992e97e9c;
  FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_38);
  return;
}


