/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077dbf0; name: FUN_0077dbf0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0077dbf0(long param_1,ulong param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte local_68 [8];
  
  pcVar6 = param_3;
  if (((*param_3 == -0x11) && (param_3[1] == -0x45)) && (pcVar6 = param_3 + 3, param_3[2] != -0x41))
  {
    pcVar6 = param_3;
  }
  if (param_4 == 0) {
LAB_0077de78:
    lVar7 = 0;
  }
  else if (param_2 == 0) {
    uVar8 = 0;
    lVar7 = 0;
    do {
      uVar10 = param_4 - uVar8;
      sVar1 = uVar10;
      if (5 < uVar10) {
        sVar1 = 6;
      }
      memcpy(local_68,pcVar6 + uVar8,sVar1);
      if (uVar10 < 6) {
                    /* WARNING: Subroutine does not return */
        memset(local_68 + sVar1,0,6 - sVar1);
      }
      if ((char)local_68[0] < 0) {
        if (((uint)(int)(char)local_68[0] >> 6 & 1) == 0) goto LAB_0077de78;
        uVar2 = (uint)(char)local_68[0];
        if ((uVar2 >> 5 & 1) == 0) {
          uVar8 = uVar8 + 2;
        }
        else if ((uVar2 >> 4 & 1) == 0) {
          uVar8 = uVar8 + 3;
        }
        else if ((uVar2 >> 3 & 1) == 0) {
          uVar8 = uVar8 + 4;
        }
        else if ((uVar2 >> 2 & 1) == 0) {
          uVar8 = uVar8 + 5;
        }
        else {
          if (((uint)(int)(char)local_68[0] >> 1 & 1) != 0) goto LAB_0077de78;
          uVar8 = uVar8 + 6;
        }
      }
      else {
        uVar8 = uVar8 + 1;
      }
      lVar7 = lVar7 + 1;
    } while (uVar8 < param_4);
  }
  else {
    uVar8 = 0;
    lVar9 = 0;
    do {
      uVar10 = param_4 - uVar8;
      sVar1 = uVar10;
      if (5 < uVar10) {
        sVar1 = 6;
      }
      memcpy(local_68,pcVar6 + uVar8,sVar1);
      if (uVar10 < 6) {
                    /* WARNING: Subroutine does not return */
        memset(local_68 + sVar1,0,6 - sVar1);
      }
      uVar5 = (ushort)local_68[0];
      if ((char)local_68[0] < '\0') {
        if ((local_68[0] >> 6 & 1) == 0) goto LAB_0077de78;
        if ((local_68[0] >> 5 & 1) == 0) {
          lVar4 = 2;
        }
        else if ((local_68[0] >> 4 & 1) == 0) {
          lVar4 = 3;
        }
        else if ((local_68[0] >> 3 & 1) == 0) {
          lVar4 = 4;
        }
        else {
          lVar4 = 5;
          if ((local_68[0] >> 2 & 1) != 0) {
            if ((local_68[0] >> 1 & 1) != 0) goto LAB_0077de78;
            lVar4 = 6;
          }
        }
      }
      else {
        lVar4 = 1;
      }
      if (param_2 < lVar9 + 1U) {
        return lVar9;
      }
      lVar7 = lVar9 + 1;
      iVar3 = (int)lVar4;
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          uVar5 = local_68[1] & 0xc03f | (local_68[0] & 0x1f) << 6;
        }
        else {
          uVar5 = 0xff1f;
          if (iVar3 == 3) {
            uVar5 = (ushort)local_68[0] << 0xc | (local_68[1] & 0x3f) << 6 | local_68[2] & 0x3f;
          }
        }
      }
      uVar8 = uVar8 + lVar4;
      *(ushort *)(param_1 + lVar9 * 2) = uVar5;
      lVar9 = lVar7;
    } while (uVar8 < param_4);
  }
  return lVar7;
}


