#ifndef MP4V2_META_H
#define MP4V2_META_H

/**************************************************************************//**
 *
 *  @defgroup mp4_meta MP4v2 iTunes Metadata
 *  @{
 *
 *****************************************************************************/

MP4V2_EXPORT
bool MP4MetadataDelete(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4GetMetadataByIndex(
    MP4FileHandle hFile,
    uint32_t      index,
    char**        ppName,   // need to free memory
    uint8_t**     ppValue,  // need to free
    uint32_t*     pValueSize );

MP4V2_EXPORT
bool MP4SetMetadataName(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataName(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataName(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataArtist(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataArtist(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataArtist(
    MP4FileHandle hFile );

/** 
  * @deprecated scheduled for removal, use MP4SetMetadataComposer().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4SetMetadataWriter(
    MP4FileHandle hFile,
    const char*   value );

/** 
  * @deprecated scheduled for removal, use MP4GetMetadataComposer().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4GetMetadataWriter(
    MP4FileHandle hFile,
    char**        value );

/** 
  * @deprecated scheduled for removal,use MP4DeleteMetadataComposer().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4DeleteMetadataWriter(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataComposer(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataComposer(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataComposer(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataComment(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataComment(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataComment(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataTool(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataTool(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataTool(
    MP4FileHandle hFile );

/** 
  * @deprecated scheduled for removal, use MP4SetMetadataReleaseDate().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4SetMetadataYear(
    MP4FileHandle hFile,
    const char*   value );

/** 
  * @deprecated scheduled for removal, use MP4GetMetadataReleaseDate().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4GetMetadataYear(
    MP4FileHandle hFile,
    char**        value );

/** 
  * @deprecated scheduled for removal, use MP4DeleteMetadataReleaseDate().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4DeleteMetadataYear(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataReleaseDate(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataReleaseDate(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataReleaseDate(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataAlbum(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataAlbum(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataAlbum(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataTrack(
    MP4FileHandle hFile,
    uint16_t      track,
    uint16_t      totalTracks );

MP4V2_EXPORT
bool MP4GetMetadataTrack(
    MP4FileHandle hFile,
    uint16_t*     track,
    uint16_t*     totalTracks );

MP4V2_EXPORT
bool MP4DeleteMetadataTrack(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataDisk(
    MP4FileHandle hFile,
    uint16_t      disk,
    uint16_t      totalDisks );

MP4V2_EXPORT
bool MP4GetMetadataDisk(
    MP4FileHandle hFile,
    uint16_t*     disk,
    uint16_t*     totalDisks );

MP4V2_EXPORT
bool MP4DeleteMetadataDisk(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataGenre(
    MP4FileHandle hFile,
    const char*   genre );

MP4V2_EXPORT
bool MP4GetMetadataGenre(
    MP4FileHandle hFile,
    char**        genre );

MP4V2_EXPORT
bool MP4DeleteMetadataGenre(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataGrouping(
    MP4FileHandle hFile,
    const char* grouping );

MP4V2_EXPORT
bool MP4GetMetadataGrouping(
    MP4FileHandle hFile,
    char**        grouping );

MP4V2_EXPORT
bool MP4DeleteMetadataGrouping(
    MP4FileHandle hFile );

/** 
  * @deprecated scheduled for removal, use MP4SetMetadataBPM().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4SetMetadataTempo(
    MP4FileHandle hFile,
    uint16_t      tempo );

/** 
  * @deprecated scheduled for removal, use MP4GetMetadataBPM().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4GetMetadataTempo(
    MP4FileHandle hFile,
    uint16_t*     tempo );

/** 
  * @deprecated scheduled for removal, use MP4DeleteMetadataBPM().
  */
MP4V2_DEPRECATED
MP4V2_EXPORT
bool MP4DeleteMetadataTempo(
    MP4FileHandle hFile );
    
MP4V2_EXPORT
bool MP4SetMetadataBPM(
    MP4FileHandle hFile,
    uint16_t      tempo );

MP4V2_EXPORT
bool MP4GetMetadataBPM(
    MP4FileHandle hFile,
    uint16_t*     tempo );

MP4V2_EXPORT
bool MP4DeleteMetadataBPM(
    MP4FileHandle hFile );

MP4V2_EXPORT
MP4V2_DEPRECATED
bool MP4DeleteMetadataTempo(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataCompilation(
    MP4FileHandle hFile,
    uint8_t       cpl );

MP4V2_EXPORT
bool MP4GetMetadataCompilation(
    MP4FileHandle hFile,
    uint8_t*      cpl );

MP4V2_EXPORT
bool MP4DeleteMetadataCompilation(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataPartOfGaplessAlbum(
    MP4FileHandle hFile,
    uint8_t       pgap );

MP4V2_EXPORT
bool MP4GetMetadataPartOfGaplessAlbum(
    MP4FileHandle hFile,
    uint8_t*      pgap );

MP4V2_EXPORT
bool MP4DeleteMetadataPartOfGaplessAlbum(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataCoverArt(
    MP4FileHandle hFile,
    uint8_t*      coverArt,
    uint32_t      size );

MP4V2_EXPORT
bool MP4GetMetadataCoverArt(
    MP4FileHandle hFile,
    uint8_t**     coverArt,
    uint32_t*     size,
    uint32_t      index DEFAULT(0) );

MP4V2_EXPORT
uint32_t MP4GetMetadataCoverArtCount(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4DeleteMetadataCoverArt(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataAlbumArtist(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataAlbumArtist(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataAlbumArtist(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4SetMetadataCopyright(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataCopyright(
    MP4FileHandle hFile,
    char**        value );
    
MP4V2_EXPORT
bool MP4DeleteMetadataCopyright(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4GetMetadataExplicit(
    MP4FileHandle hFile,
    uint8_t*      value );

MP4V2_EXPORT
bool MP4GetMetadataPurchaserAccount(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataPurchaseDate(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4SetMetadataHDVideo(
    MP4FileHandle hFile,
    uint8_t       value );

MP4V2_EXPORT
bool MP4GetMetadataHDVideo(
    MP4FileHandle hFile,
    uint8_t*      value );

MP4V2_EXPORT
bool MP4DeleteMetadataHDVideo(
    MP4FileHandle hFile );
    
MP4V2_EXPORT
bool MP4GetMetadataTVShow(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4SetMetadataShortDescription(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataShortDescription(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4DeleteMetadataShortDescription(
    MP4FileHandle hFile );

MP4V2_EXPORT
bool MP4GetMetadataSortName(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataSortArtist(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataSortAlbum(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataSortAlbumArtist(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataSortComposer(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataSortTVShow(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataTVNetworkName(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataTVEpisodeNumber(
    MP4FileHandle hFile,
    char**        value );
    
MP4V2_EXPORT
bool MP4GetMetadataLongDescription(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4GetMetadataLyrics(
    MP4FileHandle hFile,
    char**        value );

MP4V2_EXPORT
bool MP4SetMetadataEncodedBy(
    MP4FileHandle hFile,
    const char*   value );

MP4V2_EXPORT
bool MP4GetMetadataEncodedBy(
    MP4FileHandle hFile,
    char**        value );
    
MP4V2_EXPORT
bool MP4DeleteMetadataEncodedBy(
    MP4FileHandle hFile );
    
MP4V2_EXPORT
bool MP4GetMetadataTVEpisode(
    MP4FileHandle hFile,
    uint32_t*      value );

MP4V2_EXPORT
bool MP4GetMetadataTVSeason(
    MP4FileHandle hFile,
    uint32_t*      value );

MP4V2_EXPORT
bool MP4SetMetadataFreeForm(
    MP4FileHandle  hFile,
    const char*    name,
    const uint8_t* pValue,
    uint32_t       valueSize,
    const char*    owner DEFAULT(NULL) );

MP4V2_EXPORT
bool MP4GetMetadataFreeForm(
    MP4FileHandle hFile,
    const char*   name,
    uint8_t**     pValue,
    uint32_t*     valueSize,
    const char*   owner DEFAULT(NULL) );

MP4V2_EXPORT
bool MP4DeleteMetadataFreeForm(
    MP4FileHandle hFile,
    const char*   name,
    const char*   owner DEFAULT(NULL) );

MP4V2_EXPORT
void MP4AddIPodUUID(
    MP4FileHandle hFile,
    MP4TrackId    trackId );

/** @} ***********************************************************************/

#endif /* MP4V2_META_H */
