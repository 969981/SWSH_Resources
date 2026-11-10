/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e6a0; name: FUN_0048e6a0
 */


void FUN_0048e6a0(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  float local_44;
  
  if ((*(long **)(param_1 + 0x168) != param_2) && (*(char *)(param_1 + 0x98) == '\0')) {
    local_98 = 0;
    local_88 = 0xff;
    local_90 = 0xff;
    local_80 = 0;
    local_a8 = *(undefined8 *)(param_1 + 0x10);
    local_a0 = *(undefined4 *)(param_1 + 0x34);
    lVar1 = FUN_00482d90(param_2);
    if (*(long *)(param_1 + 0x178) == 0) {
      uVar3 = 1;
    }
    else {
      if (*(long *)(param_1 + 0x178) != lVar1) {
        *(undefined8 *)(param_1 + 0xa8) = 0x3f80000000000000;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Subroutine does not return */
        memset((void *)(param_1 + 0xd0),0,0x5c);
      }
      uVar3 = 0;
    }
    *(undefined2 *)(param_1 + 0x129) = 0;
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfd;
    *(undefined1 *)(param_1 + 299) = 0;
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
    (**(code **)(*param_2 + 0x150))
              (param_2,param_1 + 0xa8,0xffffffff,param_1 + 0x130,&local_a8,param_1 + 0x140,
               param_1 + 0x158,uVar3,*(undefined8 *)(param_1 + 0x168));
    *(long **)(param_1 + 0x168) = param_2;
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x178) == 0)) {
      uVar2 = FUN_00453750(lVar1);
      if ((uVar2 & 1) == 0) {
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0xff;
        local_58 = 0xff;
        local_50 = 0;
        fVar4 = (float)FUN_004530c0(lVar1,&local_78,&local_44);
        local_44 = local_44 + fVar4;
      }
      else {
        local_44 = 0.0;
      }
      *(float *)(param_1 + 0x170) = local_44;
      *(long *)(param_1 + 0x178) = lVar1;
    }
  }
  return;
}


