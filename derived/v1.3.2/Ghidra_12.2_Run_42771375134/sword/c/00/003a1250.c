/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a1250; name: FUN_003a1250
 */


void FUN_003a1250(undefined8 param_1,void *param_2,void *param_3,int *param_4,undefined8 *param_5,
                 long param_6,long param_7,int param_8)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_4;
  lVar3 = 1;
  if (param_8 == 1) {
    lVar3 = 2;
  }
  if (iVar4 == 0) {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[4] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    iVar4 = param_4[1];
  }
  else {
    pvVar1 = (void *)(param_6 + (ulong)(uint)param_4[5] * 0x20);
    pvVar2 = (void *)(param_7 + (ulong)(uint)param_4[5] * 0x10);
    FUN_0039f1d0(param_4[0xc],(param_4 + 0xc)[lVar3],param_5,iVar4,pvVar1,pvVar2,param_2,param_3,0,
                 param_8);
    memcpy(pvVar1,param_2,(ulong)(uint)(iVar4 << 5));
    memcpy(pvVar2,param_3,(ulong)(uint)(iVar4 << 4));
    iVar4 = param_4[1];
  }
  if (iVar4 == 0) {
    param_5[0x1c] = 0;
    param_5[0x1d] = 0;
    param_5[0x20] = 0;
    param_5[0x1e] = 0;
    param_5[0x1f] = 0;
    iVar4 = param_4[2];
  }
  else {
    pvVar1 = (void *)(param_6 + (ulong)(uint)param_4[6] * 0x20);
    pvVar2 = (void *)(param_7 + (ulong)(uint)param_4[6] * 0x10);
    FUN_0039f1d0(param_4[0x14],(param_4 + 0x14)[lVar3],param_5 + 0x1c,iVar4,pvVar1,pvVar2,param_2,
                 param_3,0,param_8);
    memcpy(pvVar1,param_2,(ulong)(uint)(iVar4 << 5));
    memcpy(pvVar2,param_3,(ulong)(uint)(iVar4 << 4));
    iVar4 = param_4[2];
  }
  if (iVar4 == 0) {
    param_5[0x38] = 0;
    param_5[0x39] = 0;
    param_5[0x3c] = 0;
    param_5[0x3a] = 0;
    param_5[0x3b] = 0;
    iVar4 = param_4[3];
  }
  else {
    pvVar1 = (void *)(param_6 + (ulong)(uint)param_4[7] * 0x20);
    pvVar2 = (void *)(param_7 + (ulong)(uint)param_4[7] * 0x10);
    FUN_0039f1d0(param_4[0x1c],(param_4 + 0x1c)[lVar3],param_5 + 0x38,iVar4,pvVar1,pvVar2,param_2,
                 param_3,0,param_8);
    memcpy(pvVar1,param_2,(ulong)(uint)(iVar4 << 5));
    memcpy(pvVar2,param_3,(ulong)(uint)(iVar4 << 4));
    iVar4 = param_4[3];
  }
  if (iVar4 == 0) {
    param_5[0x54] = 0;
    param_5[0x55] = 0;
    param_5[0x56] = 0;
    param_5[0x57] = 0;
    param_5[0x58] = 0;
    iVar4 = param_4[4];
  }
  else {
    pvVar1 = (void *)(param_6 + (ulong)(uint)param_4[8] * 0x20);
    pvVar2 = (void *)(param_7 + (ulong)(uint)param_4[8] * 0x10);
    FUN_0039f1d0(param_4[0x24],(param_4 + 0x24)[lVar3],param_5 + 0x54,iVar4,pvVar1,pvVar2,param_2,
                 param_3,0,param_8);
    memcpy(pvVar1,param_2,(ulong)(uint)(iVar4 << 5));
    memcpy(pvVar2,param_3,(ulong)(uint)(iVar4 << 4));
    iVar4 = param_4[4];
  }
  if (iVar4 == 0) {
    param_5[0x70] = 0;
    param_5[0x71] = 0;
    param_5[0x72] = 0;
    param_5[0x73] = 0;
    param_5[0x74] = 0;
    return;
  }
  pvVar1 = (void *)(param_6 + (ulong)(uint)param_4[9] * 0x20);
  pvVar2 = (void *)(param_7 + (ulong)(uint)param_4[9] * 0x10);
  FUN_0039f1d0(param_4[0x2c],(param_4 + 0x2c)[lVar3],param_5 + 0x70,iVar4,pvVar1,pvVar2,param_2,
               param_3,1,param_8);
  memcpy(pvVar1,param_2,(ulong)(uint)(iVar4 << 5));
  memcpy(pvVar2,param_3,(ulong)(uint)(iVar4 << 4));
  return;
}


