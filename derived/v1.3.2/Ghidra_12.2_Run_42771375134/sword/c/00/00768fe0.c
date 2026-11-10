/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768fe0; name: FUN_00768fe0
 */


undefined8 FUN_00768fe0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_28;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    *(undefined1 *)(param_1 + 0x8c) = 0;
    nn::os::GetSystemTick();
    uVar3 = nn::os::ConvertToTimeSpan();
    uVar1 = ((long)uVar3 >> 0x20) * 0xe353f7cf + ((uVar3 & 0xffffffff) * 0xe353f7cf >> 0x20);
    lVar5 = ((long)(((long)uVar3 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                   ((uVar3 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
            ((long)uVar3 >> 0x3f);
    *(long *)(param_1 + 0x80) = lVar5;
    FUN_00765110(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x18),lVar5,
                 0x7fffffffffffffff);
  }
  nn::os::GetSystemTick();
  uVar3 = nn::os::ConvertToTimeSpan();
  lVar6 = *(long *)(param_1 + 0x18);
  local_28 = 0;
  uVar1 = ((long)uVar3 >> 0x20) * 0xe353f7cf + ((uVar3 & 0xffffffff) * 0xe353f7cf >> 0x20);
  lVar5 = ((long)(((long)uVar3 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                 ((uVar3 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
          ((long)uVar3 >> 0x3f);
  iVar2 = FUN_00765200(*(undefined8 *)(param_1 + 0x70),lVar6,&local_28);
  if (iVar2 != 0) {
    local_28 = (lVar6 - *(long *)(param_1 + 0x90)) + lVar5;
  }
  lVar5 = lVar5 - local_28;
  *(long *)(param_1 + 0x78) = -lVar5;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x18);
  if (lVar5 < 0x9c41) {
    uVar4 = 0;
    if (lVar5 < 1) {
      return 0;
    }
  }
  else {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    uVar4 = 1;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return uVar4;
}


