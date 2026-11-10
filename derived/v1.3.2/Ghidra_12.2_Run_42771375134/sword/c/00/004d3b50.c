/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d3b50; name: FUN_004d3b50
 */


undefined8
FUN_004d3b50(float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,uint param_7,undefined4 param_8,uint param_9,void *param_10)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  uVar2 = 0x1f;
  if ((0.0 <= (float)param_3) && (0.0 <= (float)param_4)) {
    iVar1 = ((param_9 & 0xff) + 3 & 0x1fc) * (param_7 & 0xff);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_10,0,(ulong)(uint)(iVar1 * 4));
    }
    fVar3 = cosf(param_2);
    fVar4 = sinf(param_1);
    fVar5 = sinf(param_2);
    local_78 = cosf(param_1);
    local_78 = fVar3 * local_78;
    local_a0 = 0;
    local_88 = 0x3f800000;
    local_98 = 0;
    uStack_90 = 0x3f800000;
    local_c8 = 0;
    uStack_b8 = 0;
    local_cc = 0x3f800000;
    local_c0 = 0x3f80000000000000;
    local_b0 = 0x3f80000000000000;
    uStack_a8 = 0;
    local_80 = fVar3 * fVar4;
    fStack_7c = fVar5;
    uVar2 = FUN_004d3900(param_5,param_3,param_4,param_6,&local_98,param_10,param_7,param_8,param_9,
                         &uStack_a8,&local_cc);
  }
  return uVar2;
}


