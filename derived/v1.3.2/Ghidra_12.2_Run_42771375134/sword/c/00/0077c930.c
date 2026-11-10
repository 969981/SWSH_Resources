/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c930; name: FUN_0077c930
 */


undefined8
FUN_0077c930(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,char *param_5,
            undefined8 *param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  char local_154 [260];
  
  if ((*param_5 == '\0') && (*(char *)(param_1 + 0x328) != '\0')) {
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_1 + 0x324);
    param_6[2] = 0;
    *(undefined4 *)((long)param_6 + 0xc) = 0;
LAB_0077cab8:
    uVar5 = 1;
  }
  else {
    *param_5 = '\x01';
    iVar2 = FUN_0077c290(param_1 + 0x10,param_2,param_4,param_3,local_154);
    if (iVar2 == 1) {
      if (local_154[0] != '\0') {
        uVar1 = 0;
        while( true ) {
          if (local_154[0] == '\\') {
            local_154[uVar1] = '/';
          }
          sVar4 = strlen(local_154);
          if (sVar4 <= uVar1 + 1) break;
          local_154[0] = local_154[uVar1 + 1];
          uVar1 = uVar1 + 1;
        }
      }
      if (param_3 == 0) {
        iVar2 = nn::fs::OpenFile((FileHandle *)(param_6 + 3),local_154,1);
        if (iVar2 == 0) {
          nn::fs::GetFileSize(param_6,param_6[3]);
LAB_0077caa8:
          param_6[1] = 0;
          param_6[2] = (ulong)param_3;
          *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_1 + 0x324);
          goto LAB_0077cab8;
        }
      }
      else if (param_3 - 1 < 2) {
        uVar3 = nn::fs::CreateFile(local_154,0);
        if ((uVar3 & 0x3fffff) == 0x202) {
          return 0x24;
        }
        if (((((uVar3 & 0x1ff) != 2) || ((uVar3 & 0x3ffe00) == 0x400)) ||
            ((uVar3 & 0x3ffe00) == 0xe00)) || (0xf < (uVar3 >> 9 & 0x1fff) - 0x1e)) {
          uVar3 = nn::fs::OpenFile((FileHandle *)(param_6 + 3),local_154,6);
          if ((uVar3 & 0x3fffff) == 0x202) {
            return 0x42;
          }
          if (uVar3 == 0) {
            *param_6 = 0;
            goto LAB_0077caa8;
          }
        }
      }
    }
    uVar5 = 2;
  }
  return uVar5;
}


