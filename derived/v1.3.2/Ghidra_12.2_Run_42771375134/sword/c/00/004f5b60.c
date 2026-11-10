/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f5b60; name: FUN_004f5b60
 */


void FUN_004f5b60(float param_1,float param_2,undefined8 *param_3,long *param_4,long *param_5,
                 long param_6,uint param_7,uint param_8)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  lVar5 = *param_4;
  uVar1 = *(ushort *)(param_4 + 2);
  uVar3 = (ulong)*(ushort *)((long)param_5 + 0x12);
  pvVar6 = (void *)*param_3;
  uVar2 = *(ushort *)(param_3 + 2);
  switch(*(undefined4 *)(param_6 + 0x4f8)) {
  case 0:
  case 2:
    memcpy(pvVar6,(void *)(*param_5 + (ulong)(param_7 & 0xff) * (ulong)*(ushort *)(param_5 + 2) * 4)
           ,uVar3 << 2);
    break;
  case 1:
  case 3:
                    /* WARNING: Subroutine does not return */
    memset(pvVar6,0,uVar3 << 2);
  }
  if (*(uint *)(param_6 + 0x4fc) < 4) {
    pvVar6 = (void *)((long)pvVar6 + (ulong)uVar2 * 4);
    switch(*(uint *)(param_6 + 0x4fc)) {
    default:
      memcpy(pvVar6,(void *)(*param_5 +
                            ((ulong)(param_7 & 0xff) * 4 + 4) * (ulong)*(ushort *)(param_5 + 2)),
             uVar3 << 2);
      break;
    case 1:
    case 3:
                    /* WARNING: Subroutine does not return */
      memset(pvVar6,0,uVar3 << 2);
    }
  }
  FUN_004f6b70(param_6 + (ulong)(param_8 & 0xff) * 0x1a0,param_3,param_4,param_6 + 0x520,
               param_6 + 0x4e0,param_6 + 0x500,*(undefined1 *)(param_6 + 0x574));
  lVar4 = (ulong)(param_7 & 0xff) * 4;
  FUN_004f7d40(*(undefined4 *)(param_6 + 0x550),*(undefined4 *)(param_6 + 0x510),
               *(float *)(param_6 + 0x554) * param_2,*(float *)(param_6 + 0x514) * param_1,
               *param_5 + lVar4 * (ulong)*(ushort *)(param_5 + 2),lVar5,uVar3);
  FUN_004f7d40(*(undefined4 *)(param_6 + 0x550),*(undefined4 *)(param_6 + 0x510),
               *(float *)(param_6 + 0x554) * param_2,*(float *)(param_6 + 0x514) * param_1,
               *param_5 + (lVar4 + 4) * (ulong)*(ushort *)(param_5 + 2),lVar5 + (ulong)uVar1 * 4,
               uVar3);
  return;
}


