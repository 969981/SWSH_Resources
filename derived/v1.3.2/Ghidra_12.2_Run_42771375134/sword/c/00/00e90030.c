/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90030; name: FUN_00e90030
 */


void FUN_00e90030(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 local_70 [16];
  long local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  plVar1 = (long *)param_1[0xaf];
  if ((*(char *)((long)plVar1 + 0xec) != '\0') && ((int)plVar1[0x1e] != 0)) {
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
    lStack_48 = param_1[0xc3];
    local_58 = param_1[0xc1];
    local_60 = param_1[0xc0];
    local_50 = param_1[0xc2];
    local_28 = param_1[199];
    local_38 = param_1[0xc5];
    local_40 = param_1[0xc4];
    lStack_30 = param_1[0xc6];
    fVar3 = *(float *)(param_1[0xaf] + 0xdc);
    (**(code **)(*(long *)param_1[0x98] + 0x40))
              (fVar3,(long *)param_1[0x98],&local_60,*(undefined4 *)(param_1[0xaf] + 0xd8));
    if ((char)param_1[0xa4] != '\0') {
      auVar2 = (**(code **)(*param_1 + 0x178))(param_1);
      *(float *)((long)param_1 + 0x554) = fVar3;
      *(undefined4 *)(param_1 + 0xab) = 3;
      param_1[0xa9] = param_1[0xad];
      param_1[0xa8] = param_1[0xac];
      param_1[0xa7] =
           CONCAT44((float)((ulong)lStack_48 >> 0x20) + auVar2._12_4_,
                    (float)lStack_48 + auVar2._8_4_);
      param_1[0xa6] =
           CONCAT44((float)((ulong)local_50 >> 0x20) + auVar2._4_4_,(float)local_50 + auVar2._0_4_);
      *(undefined2 *)(param_1 + 0xa4) = 0x101;
      *(undefined4 *)(param_1 + 0xaa) = 0;
      if (fVar3 <= 0.0) {
        *(undefined4 *)((long)param_1 + 0x554) = 0x3f800000;
      }
      param_1[0xad] = param_1[0xa7];
      param_1[0xac] = param_1[0xa6];
    }
    local_70 = (**(code **)(*param_1 + 0x178))(param_1);
    FUN_00e90c10(param_1[200],local_70,&local_60);
    FUN_00e918a0(param_1[0xae]);
  }
  return;
}


