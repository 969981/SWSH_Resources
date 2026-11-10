/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc41f0; name: FUN_00bc41f0
 */


void FUN_00bc41f0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_1 + 0x628);
  if ((uVar1 & 0xfff) == 0) {
    local_28 = 0xe74344968b0f1899;
    local_30 = 0x14d0cae7b4396a81;
    iVar2 = *(int *)(param_1 + 0x62c) >> 0x18;
    local_38 = (ulong)(uint)(float)(((*(int *)(param_1 + 0x62c) << 8) >> 0x14) * -0x88 + 0x110) <<
               0x20;
    _local_48 = CONCAT44((float)(iVar2 * 0x88 + 0x10),0x43cd0000);
    fVar5 = 0.0;
  }
  else {
    local_28 = 0xe74343968b0f16e6;
    local_30 = 0xd4770c818d9717aa;
    iVar2 = *(int *)(param_1 + 0x62c) >> 0x18;
    _local_48 = CONCAT44((float)(iVar2 * 0x88 + 0x10),(float)(((int)uVar1 >> 0x18) * 0x88 + 0x18));
    local_38 = CONCAT44((float)(((*(int *)(param_1 + 0x62c) << 8) >> 0x14) * -0x88 + 0x22a),
                        (float)(((int)(uVar1 << 8) >> 0x14) * 0x88 + -0x1e1));
    fVar5 = (float)(((int)uVar1 >> 0x18) * 0x44 + -0x44);
  }
  _local_40 = CONCAT44(-(float)(iVar2 * 0x44 + -0x44),fVar5);
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 == 0) {
    FUN_0167b9b0(0,&local_28,1);
    FUN_0167b630(0,&local_28,&local_38);
    FUN_0167b630(0,&local_30,&local_40);
    FUN_0167b830(0,&local_30,&local_48);
    return;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_0167b9b0(lVar3,&local_28,1);
  FUN_0167b630(lVar3,&local_28,&local_38);
  FUN_0167b630(lVar3,&local_30,&local_40);
  FUN_0167b830(lVar3,&local_30,&local_48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


