/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077caf0; name: FUN_0077caf0
 */


undefined8
FUN_0077caf0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,char *param_5,
            undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char acStack_134 [260];
  
  if ((*param_5 == '\0') && (*(char *)(param_1 + 0x328) != '\0')) {
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_1 + 0x324);
    param_6[2] = 0;
    *(undefined4 *)((long)param_6 + 0xc) = 0;
LAB_0077cc1c:
    uVar3 = 1;
  }
  else {
    *param_5 = '\x01';
    iVar1 = FUN_0077c480(param_1 + 0x10,param_2,param_4,param_3,acStack_134);
    if (iVar1 == 1) {
      if (param_3 == 0) {
        iVar1 = nn::fs::OpenFile((FileHandle *)(param_6 + 3),acStack_134,1);
        if (iVar1 == 0) {
          nn::fs::GetFileSize(param_6,param_6[3]);
LAB_0077cc0c:
          param_6[1] = 0;
          param_6[2] = (ulong)param_3;
          *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_1 + 0x324);
          goto LAB_0077cc1c;
        }
      }
      else if (param_3 - 1 < 2) {
        uVar2 = nn::fs::CreateFile(acStack_134,0);
        if ((uVar2 & 0x3fffff) == 0x202) {
          return 0x24;
        }
        if (((((uVar2 & 0x1ff) != 2) || ((uVar2 & 0x3ffe00) == 0x400)) ||
            ((uVar2 & 0x3ffe00) == 0xe00)) || (0xf < (uVar2 >> 9 & 0x1fff) - 0x1e)) {
          uVar2 = nn::fs::OpenFile((FileHandle *)(param_6 + 3),acStack_134,6);
          if ((uVar2 & 0x3fffff) == 0x202) {
            return 0x42;
          }
          if (uVar2 == 0) {
            *param_6 = 0;
            goto LAB_0077cc0c;
          }
        }
      }
    }
    uVar3 = 2;
  }
  return uVar3;
}


