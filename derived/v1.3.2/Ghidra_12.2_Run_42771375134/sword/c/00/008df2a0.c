/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df2a0; name: FUN_008df2a0
 */


void FUN_008df2a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                 undefined8 param_5,long *param_6)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_80 [2];
  undefined1 auStack_70 [32];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  
  if (*param_6 == 0) {
    local_4f = 0;
  }
  else {
    local_4f = FUN_0087d3e0(*param_4);
  }
  uVar4 = *param_4;
  local_80[0] = uVar4;
  local_50 = param_3;
  sVar1 = FUN_008783b0(uVar4);
  sVar2 = FUN_008783c0(uVar4);
  uVar3 = FUN_008f35c0(*param_1,0x800);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_008f35c0(*param_1,0x1000);
    local_4e = 0;
    if (((sVar2 != 1) || (sVar1 != 0x37a)) || ((uVar3 & 1) == 0)) goto LAB_008df36c;
  }
  else {
    local_4e = 0;
    if ((sVar1 != 0x37a) || (sVar2 != 1)) goto LAB_008df36c;
  }
  local_4e = 1;
LAB_008df36c:
  FUN_008df9e0(auStack_70,param_5);
  FUN_008dff80(param_2,local_80);
  return;
}


