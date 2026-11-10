/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00762f70; name: FUN_00762f70
 */


int FUN_00762f70(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  char *local_70;
  MediaData aMStack_68 [8];
  
  plVar6 = *(long **)(param_1 + 0x90);
  if (plVar6 == (long *)0x0) {
    iVar9 = 0x3000;
  }
  else {
    piVar1 = (int *)(param_1 + 0x180);
    iVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,piVar1);
    if ((iVar3 == 0) && (iVar3 = 0x3000, 0 < *piVar1)) {
      iVar3 = 0;
    }
    movie::MediaData::MediaData(aMStack_68);
    if (*piVar1 < 1) {
      movie::MediaData::Clear();
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    else {
      piVar2 = (int *)(param_1 + 0xf8);
      iVar9 = 0;
LAB_00763014:
      do {
        while( true ) {
          (**(code **)(**(long **)(param_1 + 0x90) + 0x28))
                    (*(long **)(param_1 + 0x90),iVar9,aMStack_68);
          movie::MediaData::FindInt64((char *)aMStack_68,(long *)"durationUs");
          uVar7 = movie::MediaData::FindString((char *)aMStack_68,(char **)&DAT_01cf6193);
          if ((uVar7 & 1) != 0) break;
LAB_007631b8:
          iVar9 = iVar9 + 1;
          if (*piVar1 <= iVar9) goto LAB_00763220;
        }
        iVar4 = strncasecmp("video/",local_70,6);
        if (iVar4 != 0) {
          iVar4 = strncasecmp("audio/",local_70,6);
          if (iVar4 != 0) goto LAB_007631b8;
          iVar4 = strncasecmp("audio/mp4a-latm",local_70,0xf);
          if (iVar4 == 0) {
            uVar8 = 4;
LAB_00763148:
            *(undefined4 *)(param_1 + 0xd0) = uVar8;
          }
          else {
            iVar4 = strncasecmp("audio/vorbis",local_70,0xc);
            if (iVar4 == 0) {
              uVar8 = 5;
              goto LAB_00763148;
            }
          }
          movie::MediaData::FindInt32((char *)aMStack_68,(int *)"sample-rate");
          movie::MediaData::FindInt32((char *)aMStack_68,(int *)"channel-count");
          iVar4 = *(int *)(param_1 + 0x184);
          if ((48000 < iVar4) && (iVar5 = strncasecmp("audio/mp4a-latm",local_70,0xf), iVar5 == 0))
          {
            *(undefined4 *)(param_1 + 0xd0) = 0;
            *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
          }
          if ((15999 < iVar4) && (*(int *)(param_1 + 0x188) < 7)) goto LAB_007631b8;
          *(undefined4 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
          iVar9 = iVar9 + 1;
          if (*piVar1 <= iVar9) break;
          goto LAB_00763014;
        }
        iVar4 = strncasecmp("video/avc",local_70,9);
        if (iVar4 != 0) {
          iVar4 = strncasecmp("video/x-vnd.on2.vp8",local_70,0x13);
          if (iVar4 == 0) {
            *piVar2 = 2;
            iVar9 = iVar9 + 1;
            if (*piVar1 <= iVar9) break;
          }
          else {
            iVar4 = strncasecmp("video/x-vnd.on2.vp9",local_70,0x13);
            if (iVar4 != 0) goto LAB_007631b8;
            *piVar2 = 3;
            iVar9 = iVar9 + 1;
            if (*piVar1 <= iVar9) break;
          }
          goto LAB_00763014;
        }
        *piVar2 = 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *piVar1);
LAB_00763220:
      movie::MediaData::Clear();
      iVar4 = *piVar2;
    }
    iVar9 = iVar3;
    if ((iVar4 == 0) && (iVar9 = 0x4000, *(int *)(param_1 + 0xd0) != 0)) {
      iVar9 = iVar3;
    }
    movie::MediaData::~MediaData(aMStack_68);
  }
  return iVar9;
}


